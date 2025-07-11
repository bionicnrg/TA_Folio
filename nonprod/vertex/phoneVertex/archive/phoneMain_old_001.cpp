/*
.Synopsis
    main file for phone exercise
.Description
    reqs
    1. Split class into own files .h / .cpp - done
    1a. include them in the main file and create a few objects
    2. Add new features to the class
    2a. Add a new method called chargeBattery(int charge) 
    that increases the battery life by a give amount(but doesn't go beyond 100%)
    3. Simulate basic phone functionality
    3b. Add a method called makeCall() that reduces battery by 5% when called.
    if the battery life is below 5%, the method should print message saying "Low Battery, please charge"
    Don't decrease battery life / kill phone if 0% nothing works
    4. Create a class for a different object
    4a. Create a new class of your choosing, maybe think of a new enemy or player class for game
    5. Encapsulation exercise getter and setter
    5a. create getter and setter methods for serialNumber to enforce encapsulation
    5b. objective: reinforce the concept of encapsulation where member variables are private and you control the membership access
    6. Manipulate an array of objects
    6a. Create an array of phone objects and write a loop to print out the information for each phone.

.Author
    James Lewis
.Date
    06/02/2025
*/

//reference header file relatively
#include "headerFiles\common\commonPhone.h"

int main(){

    //Initialize objects
	Phone iPhone("Iphone 11", 87784);
	Phone xPeria("Sony Xperia 15", 857478);

	iPhone.printInformation();
	xPeria.printInformation();
    iPhone.setFactoryDefaults(15, 30);
	xPeria.setFactoryDefaults(10, 30);
    xPeria.takePicture();
    xPeria.chargeBattery(25, 50.0);

	
	return 0;
}
