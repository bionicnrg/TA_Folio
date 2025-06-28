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

#include "E:\07_supercamlabs\02_techStack\02_projectSrc\vertex\headerFiles\common\commonUtility02.h"
#include <iostream>

void printVectorSize(std::vector<int>vector){
	std::cout << "printVectorSize() -> Size of Vector is: " << vector.size() << std::endl;
	
}

void addTenToLastIndex(std::vector<int>&numbers, int intToAdd){
		printVectorSize(numbers);
		numbers.push_back(numbers.back() + intToAdd);
		printVectorSize(numbers);
}
