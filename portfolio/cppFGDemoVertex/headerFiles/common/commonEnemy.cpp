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
		name = "Park Hwang";
        break;
	case 3:
		health += roundNumber;
		atkPower += roundNumber;
		name = "Rie Okayama";
        break;
	case 4:
		health += roundNumber;
		atkPower += roundNumber;
		name = "Ryo Okayama";
        break;
	case 5:
		health += roundNumber;
		atkPower += roundNumber;
		armor += roundNumber / 2;
		name = "Diamond Fist Master Cutter Wolf";
        break;
	case 6:
		health += roundNumber;
		atkPower += roundNumber;
		armor += roundNumber / 2;
		name = "Diamond Fist King Daego Drago";
        break;

	}
	
}
