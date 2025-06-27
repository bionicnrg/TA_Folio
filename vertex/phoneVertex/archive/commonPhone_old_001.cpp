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

std::string chargeBattery(int charge, float batteryLife){
    std::string chargeState;
    float newBatteryLife = 0.0;

    /*
    2a. Add a new method called chargeBattery(int charge) 
    that increases the battery life by a give amount(but doesn't go beyond 100%)
    */

    if(charge < 100){
        newBatteryLife = newBatteryLife + charge + batteryLife;
        chargeState = "Increasing Charge by 5%";

    }
    else if (charge >= 100){
        
        chargeState = "Stopped Charging at 100%";
    }

    return chargeState;

}