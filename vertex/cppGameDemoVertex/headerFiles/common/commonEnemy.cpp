/*
.Synopsis
    implementation file
.Description
    reqs
    1. this is the file where all the methods go.

.Author
    James Lewis
.Date
    06/02/2025
*/

//include header file
#include "..\classes\enemy.h"

//constructor for player, pulls in arguments from Character constructor
Enemy::Enemy(int health, int atkPower, int armor, std::string name) : Character(health, atkPower, armor, name), Generator(std::random_device{}()), Distribution(0, 2){}

std::string Enemy::chooseAction(){

	int action = Distribution(Generator);

	return getActionFromInput(action);
}

void Enemy::increaseDifficulty(int roundNumber){
	switch(roundNumber)
	{
	case 1:
		return;
	case 2:
		health += roundNumber;
		name = "goblin warrior";
        break;
	case 3:
		health += roundNumber;
		atkPower += roundNumber;
		name = "gladiator";
        break;
	case 4:
		health += roundNumber;
		atkPower += roundNumber;
		name = "beserker";
        break;
	case 5:
		health += roundNumber;
		atkPower += roundNumber;
		armor += roundNumber / 2;
		name = "knight champion";
        break;

	}
	
}
