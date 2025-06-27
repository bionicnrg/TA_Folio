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


#ifndef COMMONUTILITY.h
#define COMMONUTILITY.h

//#ifndef UTILITy.h
//#define UTILITY.h 
//these are the old way to define the guard rails.
//Any code goes in between define and endif
//#endif is used at and of code


//using namespace std;
#include <vector>

//this function add integer based on reference
void printVectorSize(std::vector<int>vector);

//this function add 10 to last index
void addTenToLastIndex(std::vector<int>&numbers, int intToAdd);

#endif