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
#include "commonPhone.h"

//calling constructor
Phone::Phone(std::string Name, int serialNumber) : Name(Name), serialNumber(serialNumber), batteryLife(30), internalTemperature(15), charge(0) {}

void Phone::printInformation(){
	std::cout << "This is a: " << Name << std::endl;
	std::cout << "Serial Number is: " << serialNumber << std::endl;
	std::cout << "Internal Temperature is: " << internalTemperature << std::endl;
	}

void Phone::printBatteryLife(){
	std::cout << "Current Battery: " << batteryLife << std::endl;
	}

void Phone::takePicture(){
	std::cout << "Click!" << std::endl;
	}

void Phone::setFactoryDefaults(float defaultBatteryLife, float defaultInternalTemperature){
	batteryLife = defaultBatteryLife;
	internalTemperature = defaultInternalTemperature;
	}

void Phone::getSerialNumber() const{
    /*
    5. Encapsulation exercise getter and setter
    5a. create getter and setter methods for serialNumber to enforce encapsulation
    */
    std::cout << "Serial Number is: " << serialNumber << std::endl;

}

void Phone::setSerialNumber(int userSerialNumber){
    /*
    5. Encapsulation exercise getter and setter
    5a. create getter and setter methods for serialNumber to enforce encapsulation
    */
    serialNumber = userSerialNumber;

}

void Phone::playMusic(){
    /*
    2. Add new features to the class
    */
    std::cout << "Playing a song!" << std::endl;

}

void Phone::makeCall(float callBatteryLife){
    /*
    3. Simulate basic phone functionality
    3b. Add a method called makeCall() that reduces battery by 5% when called.
    if the battery life is below 5%, the method should print message saying "Low Battery, please charge"
    */

    batteryLife = batteryLife - callBatteryLife;

    std::cout << "Making a call" << std::endl;
    std::cout << "Call reduced Battery life by " << callBatteryLife << std::endl;

    if(batteryLife > 5.0) {
        std::cout << "Battery Life now: " << batteryLife << std::endl;
    }
    else if(batteryLife < 5.0 && batteryLife > 1.0) {
        std::cout << "Battery Life now: " << batteryLife << std::endl;
        std::cout << "Low Battery, please charge" << std::endl;
    }
    else if (batteryLife <= 0.0){
        //set battery life to 0 as you cannot exceed max.
        batteryLife = 0.0;
        std::cout << "Battery Life now: " << batteryLife << std::endl;
        std::cout << "Shutting down" << std::endl;
    }


}
        
        
void Phone::chargeBattery(int charge){
    /*
    2a. Add a new method called chargeBattery(int charge) 
    that increases the battery life by a give amount(but doesn't go beyond 100%)
    */

    batteryLife = batteryLife + charge;

    if(batteryLife < 100.0){
        std::cout << "Increasing Charge by: " << charge << std::endl;
        std::cout << "Battery Life now: " << batteryLife << std::endl;

    }
    else if (batteryLife >= 100.0){

        //set battery life to 100 as you cannot exceed max.
        batteryLife = 100.0;
        
        std::cout << "Stopped Charging at 100%" << std::endl;
        std::cout << "Battery Life now: " << batteryLife << std::endl;
    }

}

