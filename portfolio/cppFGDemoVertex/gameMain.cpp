/*
.Synopsis
    main file for fighting game exercise
.Description
    reqs
    Game Structure
    Player:

    The player has 1 life
    The player can select between
    Attack
    Defend
    Throw

    Enemy:
    Enemy will have increasing difficulty and life
    Each enemy has their own actions and can choose to attack, defend, throw

    game loop:
    each round the player selects and action
    the game evaluates the result of the round based on action
    player wins by surving as long as possible in arena
    game gets harder as player defeats more enemies
	accounted for double KO scenario

    attack vs attack
    attack vs throw
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
    06/27/2025
*/


//reference header file relatively
#include "headerFiles/classes/player.h"
#include "headerFiles/classes/enemy.h"

int main(){

	Player mainPlayer(12, 4, 2, "Hero");
    Enemy mainEnemy(2, 1, 1, "Kenny Slowman");
	int roundNumber = 1;

	std::cout << "--------------------------------------" << std::endl;
	std::cout << "Welcome to King of Diamond Fist Tournament." << std::endl;
	std::cout << "You have 3 options: Attack / Defend / Throw." << std::endl;
	std::cout << "Guide the hero through the tournament and prove you are the best." << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	while(mainPlayer.getIsAlive()){
		std::string playerAction = mainPlayer.chooseAction();
		std::string enemyAction = mainEnemy.chooseAction();

		std::cout << "Player " << playerAction << "s" << std::endl;
		std::cout << "Enemy " << enemyAction << "s" << std::endl;

		//Process around the logic
		if(playerAction == "attack" && enemyAction == "attack"){
			std::cout << "Both Fighters attack each other and both take damage!" << std::endl;
			mainPlayer.updateHealth(-(mainEnemy.getAtkPower() * 2));
			mainEnemy.updateHealth(-(mainPlayer.getAtkPower() * 2));
		}
		else if(playerAction == "attack" && enemyAction == "throw"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Hero attacks and beats " << mainEnemy.getName() << " throw which hurts them!" << std::endl;
			mainEnemy.updateHealth(-(mainPlayer.getAtkPower() * 2));

		}
		else if(playerAction == "attack" && enemyAction == "defend"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << mainEnemy.getName() << " defends the attack and takes no damage!" << std::endl;

		}
		else if(playerAction == "throw" && enemyAction == "attack"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Hero tries to throw but is beat by " << mainEnemy.getName() << " attack and takes damage!" << std::endl;
			mainPlayer.updateHealth(-(mainEnemy.getAtkPower() * 2));

		}
		else if(playerAction == "defend" && enemyAction == "attack"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Hero defends the attack, " << mainEnemy.getName() << " attack is not effective!" << std::endl;

		}
		else if(playerAction == "defend" && enemyAction == "defend"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Hero and " << mainEnemy.getName() << " defend and neither take damage!" << std::endl;
		}
		else if(playerAction == "defend" && enemyAction == "throw"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Hero tries to defend but is beat by " << mainEnemy.getName() << " throw and takes damage!" << std::endl;
			mainPlayer.updateHealth(-(mainEnemy.getAtkPower() * 3));
		}
		else if(playerAction == "throw" && enemyAction == "defend"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Hero works around " << mainEnemy.getName() << " defense and throws them which hurts them!" << std::endl;
			mainEnemy.updateHealth(-(mainPlayer.getAtkPower() * 3));
		}
		else if(playerAction == "throw" && enemyAction == "throw"){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << "Both combatants try to grapple and throw and neither can gain an advantage!" << std::endl;

		}

		if(!mainEnemy.getIsAlive()){
            std::cout << "--------------------------------------" << std::endl;
			std::cout << mainEnemy.getName() << " has been defeated by the Hero! A stronger enemy approaches" << std::endl;
			roundNumber += 1;
			if(roundNumber > 6){
                std::cout << "--------------------------------------" << std::endl;
				std::cout << "The hero has defeated all enemies." << std::endl;
				std::cout << "They have received the title of Diamond Fist." << std::endl;
				
				break;
			}
			mainEnemy.increaseDifficulty(roundNumber);		
		}

	}

	if (!mainPlayer.getIsAlive() && !mainEnemy.getIsAlive()) {
    	std::cout << "It's a double KO! Both fighters have fallen!" << std::endl;
	}
	else if (!mainPlayer.getIsAlive()){
    	std::cout << "--------------------------------------" << std::endl;
		std::cout << "Our Hero has been defeated! Try Again???" << std::endl;
	}


    std::cout << "--------------------------------------" << std::endl;
	std::cout << "Thanks for playing" << std::endl;
	return 0;
}
