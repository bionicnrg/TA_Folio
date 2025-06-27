/*
.Synopsis
    main file for phone exercise
.Description
    reqs
    Game Structure
    Player:

    The player has 3 lives.
    The player can select between
    Attack
    Defend
    Parry

    Enemy:
    Enemy will have increasing difficulty and life
    Each enemy has their own actions and can choose to attack, defend, parry

    game loop:
    each round the player selects and action
    the game evaluates the result of the round based on action
    player wins by surving as long as possible in arena
    game gets harder as player defeats more enemies

    attack vs attack
    attack vs parry
    attack vs defend

    The goal is to survive by choosing wisely against tougher enemies


    Things to make
    Character class - Inheritance
    health system
    take damage
    check if alive
    

.Author
    James Lewis
.Date
    06/04/2025
*/


//reference header file relatively
#include "headerFiles/classes/player.h"
#include "headerFiles/classes/enemy.h"

int main(){

	Player mainPlayer(5, 2, 2, "Hero");
    Enemy mainEnemy(1, 1 ,1 , "Goblin");
	int roundNumber = 1;

	while(mainPlayer.getIsAlive()){
		std::string playerAction = mainPlayer.chooseAction();
		std::string enemyAction = mainEnemy.chooseAction();

		std::cout << "Player " << playerAction << "s" << std::endl;
		std::cout << "Enemy " << enemyAction << "s" << std::endl;

		//Process around the logic
		if(playerAction == "attack" && enemyAction == "attack"){
			std::cout << "It's a clash!" << std::endl;
		}
		else if(playerAction == "attack" && enemyAction == "parry"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << mainEnemy.getName() << " Parries the attack and hero is struck!" << std::endl;
			mainPlayer.updateHealth(-(mainEnemy.getAtkPower() * 2));

		}
		else if(playerAction == "attack" && enemyAction == "defend"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << mainEnemy.getName() << " defends the attack and is less effective!" << std::endl;
			mainEnemy.updateHealth(-(mainPlayer.getAtkPower() / 2));

		}
		else if(playerAction == "parry" && enemyAction == "attack"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Hero parries the attack and " << mainEnemy.getName() << " is struck!" << std::endl;
			mainEnemy.updateHealth(-(mainPlayer.getAtkPower() * 2));
		}
		else if(playerAction == "defend" && enemyAction == "attack"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Hero defends the attack, " << mainEnemy.getName() << " attack is less effective!" << std::endl;
			mainPlayer.updateHealth(-(mainEnemy.getAtkPower() / 2));
		}
		else if(playerAction == "defend" && enemyAction == "defend"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Hero and enemy defend and no damage!" << std::endl;
		}

		if(!mainEnemy.getIsAlive()){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << mainEnemy.getName() << " has been defeatedy by the Hero! A stronger enemy approaches" << std::endl;
			roundNumber += 1;
			if(roundNumber > 5){
                std::cout << "--------------------------------------" << std::endl;
				std::cout << "The hero has defeated all enemies." << std::endl;
				
				break;
			}
			mainEnemy.increaseDifficulty(roundNumber);		
		}
	}

	if (!mainPlayer.getIsAlive()){
        std::cout << "--------------------------------------" << std::endl;
		std::cout << "Our Hero has perished! Try Again???" << std::endl;
	}

    std::cout << "--------------------------------------" << std::endl;
	std::cout << "Thanks for playing" << std::endl;
	return 0;
}
