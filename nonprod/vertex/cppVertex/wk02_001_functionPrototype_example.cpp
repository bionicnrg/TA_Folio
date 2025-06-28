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


#include <iostream>
//using namespace std;
#include <cmath>
#include <vector>
#include <string>

/*

*/

void printVectorSize(std::vector<int>vector);
void addTenToLastIndex(std::vector<int>numbers, int intToAdd);


int main(){

	std::vector<int> numbers = {1,2,3,4,5};
	addTenToLastIndex(numbers, 10);
	std::cout << "numbers global: " << std::endl;
	std::cout << numbers.back() << std::endl;
	
	return 0;
}


void printVectorSize(std::vector<int>vector){
	std::cout << "printVectorSize() -> Size of Vector is: " << vector.size() << std::endl;
	
}

void addTenToLastIndex(std::vector<int>numbers, int intToAdd){
		printVectorSize(numbers);
		numbers.push_back(numbers.back() + intToAdd);
		printVectorSize(numbers);
}






