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
#ifndef CHARACTER_H
#define CHARACTER_H

//using namespace std;
#include <vector>
#include <iostream>

//class holds basic attributes such as health / attack power / alive state
class Character
{
    public:
		Character(int health, int atkPower, int armor, std::string name);

		int getHealth() const { return health; }
		std::string getName() const { return name; };
		bool getIsAlive() const { return health > 0; };
		void updateHealth(int Amount);
		int getAtkPower() const { return atkPower > 0; }

		virtual std::string chooseAction() = 0;
		std::string getActionFromInput(int input);

    private:
	
    protected:
    	std::string name;
		int health;
		int atkPower;
		int armor;

};


#endif