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
#ifndef COMMONPHONE_H
#define COMMONPHONE_H

//using namespace std;
#include <vector>
#include <iostream>


class Phone
{
    public:
		Phone(std::string Name, int serialNumber) : Name(Name), serialNumber(serialNumber), batteryLife(30), internalTemperature(15), charge(0){}

        void printInformation(){
			std::cout << "This is a: " << Name << std::endl;
			std::cout << "Serial Number is: " << serialNumber << std::endl;
			std::cout << "Internal Temperature is: " << internalTemperature << std::endl;
		}

		void printBatteryLife(){
			std::cout << batteryLife << std::endl;
		}

		void takePicture(){
			std::cout << "Click!" << std::endl;
		}

		void setFactoryDefaults(float defaultBatteryLife, float defaultInternalTemperature){
			batteryLife = defaultBatteryLife;
			internalTemperature = defaultInternalTemperature;
		}
        
        void chargeBattery(int charge, float batteryLife){
            std::cout << "Battery life is now" << batteryLife << std::endl;
        }

    private:
        std::string Name;
		int serialNumber;
		float batteryLife;
		float internalTemperature;
        int charge;


    protected:

};



#endif