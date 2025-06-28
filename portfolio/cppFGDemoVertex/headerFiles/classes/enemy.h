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
#ifndef ENEMY_H
#define ENEMY_H

//include character.h file
#include "character.h"
#include <iostream>
#include <random>
//using namespace std;


class Enemy: public Character
{
	public:
		Enemy(int health, int atkPower, int armor, std::string name);

		std::string chooseAction() override;
		void increaseDifficulty(int roundNumber);

	private:
		std::mt19937 Generator;
		std::uniform_int_distribution<> Distribution;
		


};

#endif