/*
.Synopsis
    Header file for phone class
    The class is defined here.
.Description
    reqs
    1. 

.Author
    James Lewis
.Date
    06/02/2025
*/

//if file not defined, define it.
#ifndef PLAYER_H
#define PLAYER_H

//include character.h file
#include "character.h"
#include <vector>
#include <iostream>
#include <limits>
//using namespace std;


class Player: public Character
{
	public:
		Player(int health, int atkPower, int armor, std::string name);

		std::string chooseAction() override;



};

/*
Public members of Character remain public in player
Protected members of Character remain protected in player
Private members of Character remain inaccessiable in player (player can access indirectly via public or protected methods in Character)

*/



#endif