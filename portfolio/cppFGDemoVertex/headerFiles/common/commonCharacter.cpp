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

//include header file based on relative path
#include "..\classes\character.h"

//constructor for character
Character::Character(int health, int atkPower, int armor, std::string name) : health(health), atkPower(atkPower), armor(armor), name(name){}

void Character::updateHealth(int amount){
    health += amount;
	std::cout << name << " has " << health << " health remaining" << std::endl;
}

std::string Character:: getActionFromInput(int input){
	switch(input)
	{
	case 0:
		return "attack";
	case 1:
		return "throw";
	case 2:
		return "defend";
    default:
        return "unknown";
	}

}