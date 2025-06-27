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
		Phone(std::string Name, int serialNumber);

		void printInformation();
		void printBatteryLife();
		void takePicture();
		void playMusic();
		void setFactoryDefaults(float defaultBatteryLife, float defaultInternalTemperature);
		void chargeBattery(int charge);
		void getSerialNumber() const;
		void setSerialNumber(int serialNumber);
		void makeCall(float callBatteryLife);

    private:
        std::string Name;
		int serialNumber;
		float batteryLife;
		float internalTemperature;
        int charge;


    protected:

};


class headPhones
{
    public:
		headPhones(std::string Name, int serialNumber);

		void printInformation();
		void getColor() const;
		void setColor(std::string color);
		void getSerialNumber() const;
		void setSerialNumber(int serialNumber);
		void getType() const;
		void setType(std::string type);

    private:
        std::string Name;
		int serialNumber;
		std::string color;
		std::string type;


    protected:

};


    void printPhones(std::vector<Phone>& phoneVect);


#endif