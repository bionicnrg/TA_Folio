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
#include "..\classes\player.h"

//constructor for player, pulls in arguments from Character constructor
Player::Player(int health, int atkPower, int armor, std::string name) : Character(health, atkPower, armor, name){}

std::string Player::chooseAction(){
	int input;
	while(true){
		std::cout << "Choose an action - 1: Attack, 2:Throw, 3:Defend" << std::endl;
		std::cin >> input;

		if (std::cin.fail() || input < 1|| input > 3){

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input, you must enter: - 1: Attack, 2:Throw, 3:Defend" << std::endl;
		}
		else{
			break;
		}
		
	}
	input -= 1;

	return getActionFromInput(input);
}