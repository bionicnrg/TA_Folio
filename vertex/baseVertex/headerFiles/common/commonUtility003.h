/*
.Synopsis
    basic file for exercises week2
.Description
    reqs
    1. 

.Author
    James Lewis
.Date
    06/02/2025
*/

#ifndef COMMONUTILITY003_h
#define COMMONUTILITY003_h

//#ifndef UTILITY_h
//#define UTILITY_h 
//these are the old way to define the guard rails.
//Any code goes in between define and endif
//#endif is used at and of code


//using namespace std;
#include <vector>
#include <iostream>

//this function add integer based on reference
void printVectorSize(std::vector<int>vector);

//this function add 10 to last index
void addTenToLastIndex(std::vector<int>&numbers, int intToAdd);

#endif