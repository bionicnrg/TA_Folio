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

    void addTenToLastIndex(std::vector<int>numbers, int intToAdd){
        numbers.push_back(numbers.back() + intToAdd);
        std::cout << "numbers local: " << std::endl;
        std::cout << numbers.back() << std::endl;
    }

int main(){

	std::vector<int> numbers = {1,2,3,4,5};
	addTenToLastIndex(numbers, 10);
	std::cout << "numbers global: " << std::endl;
    std::cout << numbers.back() << std::endl;
	
	return 0;
}

std::vector<int> askNumber() {
    int inputVal = -1;
    std::vector<int> vectDblUp;
    unsigned int i;

    /* 2 ask the user for input, don't stop collecting input till user enters 0
    create another function
    iterate every 2 times on the vector and multiply by 2
    print numbers
    */

    while (inputVal != 0){
        std::cout << "Please input a number, to exit press 0: " << std::endl;
        std::cin >> inputVal;
        if(inputVal != 0){
            vectDblUp.push_back(inputVal);
        }

    }

    std::cout << "-------------------------" << std::endl;
    std::cout << "Number Collection Complete" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Printing Results" << std::endl;

	return vectDblUp;
}

std::vector<int>dblUp(std::vector<int> vectDblUp) {
    int dblVal = 0;
    int numTtl;
    unsigned int i;
    std::vector<int> vectDblNumPass;

    /* 2 ask the user for input, don't stop collecting input till user enters 0
    create another function
    iterate every 2 times on the vector and multiply by 2
    print numbers
    */

    for (i = 0; i < vectDblUp.size(); ++i) {
        if(i % 2 == 1){
            numTtl = vectDblUp.at(i) * 2;
            vectDblNumPass.push_back(numTtl);
        }

    }


    //print result
    for (i = 0; i < vectDblNumPass.size(); ++i) {
        std::cout << vectDblNumPass.at(i) << std::endl;
    }

    std::cout << "-------------------------" << std::endl;
    std::cout << "Printing reversed result" << std::endl;
    //reverse result
    for (i = vectDblNumPass.size(); i > 0; --i) {
        std::cout << vectDblNumPass.at(i - 1) << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

	return vectDblNumPass;
}


int askNumHouseCalc() {
    int width = 0;
    int height = 0;
    int area = 0;


    /* 4. input width and height don't stop till they enter 0
    square meters
    square meters of a house
    */

    while (true){
        std::cout << "Please input a number for width and height, to exit press 0 for both entries: " << std::endl;
        std::cin >> width;
        std::cin >> height;

        if(width == 0 || height == 0){
            std::cout << "-------------------------" << std::endl;
            std::cout << "Exiting Program" << std::endl;
            break;
        }
        else{
            area = height * width;
            std::cout << "Square meter calcution is: " << area << std::endl;
        }


    }

    return 0;

}











