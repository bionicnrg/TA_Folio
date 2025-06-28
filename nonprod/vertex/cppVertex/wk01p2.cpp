/*
.Synopsis
    basic file for exercise
.Description
    reqs
    ask the user to input 5 numbers and place them in a vector
    pass the vector into a function and get the highest number
    print the result+

    2 ask the user for input, don't stop collecting input till user enters 0
    create another function
    iterate every 2 times on the vector and multiply by 2
    print numbers

    3 do a reverse loop and print the results

    4. input width and height don't stop till they enter 0
    square meters
    square meters of a house

.Author
    James Lewis
.Date
    05/30/2025
*/


#include <iostream>
//using namespace std;
#include <cmath>
#include <vector>
#include <string>

/*
Notes
Variable scope
local variables can only be accessed within the function and not outside unless you return a result
global variables are declared outside of the function, but these are discouraged.
namespaces - you use this so you don't have to type std every single time in the code.  This means scope resolution of the library isn't needed.
*/


std::string askName();
int askAge();
double farenheitCalculation(double celcius);
int eurosCalculation(int dollars);
int milesCalculation(int km);
int kgsCalculation(int lbs);
float avgCalculationStatic();
std::vector<int> inputVector();
int sumVector(std::vector<int> vectNum);
int avgVector(std::vector<int> vectNum);
int minVector(std::vector<int> vectNum);
int maxVector(std::vector<int> vectNum);
std::string guessNum(std::vector<int> vectNum);


int main() {
    std::string name = "No Name Entered";
    int age = 0;
    double celcius = 0.00;
    double farenheit = 0.00;
    int dollars = 0;
    int euros = 0;
    int km = 0;
    int miles = 0;
    int lbs = 0;
    int kgs = 0;
    unsigned int i;
    double inputVal = 0;
    int inputSize = 0;
    double ttlNum = 0;
    double avgNum = 0;
    int avgNumStatic = 0;
    int minNum = 100000000;
    int maxNum = -1000000000;
    std::string guessResult;

    //Ask user to input name
    name = askName();
    std::cout << "The name entered is: "  << name << std::endl;

    //Ask user to input age
    age = askAge();
    std::cout << "The age is: " << age << std::endl;

    //Ask for the temperature in celcius and convert to farenheit
    std::cout << "Please enter temp in Celcius: " << std::endl;
    std::cin >> celcius;
    farenheit = farenheitCalculation(celcius);
    std::cout << celcius << " degrees converted to farenheit is: " << farenheit << std::endl;

    //km amount and convert to miles
    std::cout << "Please enter how many kilometers: " << std::endl;
    std::cin >> km;
    miles = eurosCalculation(km);
    std::cout << km << " kilometers converted to miles is: " << miles << std::endl;

    //lbs amount and convert to kgs
    std::cout << "Please enter how many lbs: " << std::endl;
    std::cin >> lbs;
    kgs = eurosCalculation(lbs);
    std::cout << lbs << " lbs converted to kgs is: " << kgs << std::endl;

    //Dollar amount and convert to euros
    std::cout << "Please enter how many dollars: " << std::endl;
    std::cin >> dollars;
    euros = eurosCalculation(dollars);
    std::cout << dollars << " dollars converted to euros is: " << euros << std::endl;

    //Calculate average of pre-entered vector
    avgNumStatic = avgCalculationStatic();
    std::cout << "The average number of pre-entered vector is: " << avgNumStatic << std::endl;


    //output sum / average / min / max of 5 numbers entered as integers
    std::vector<int> vectNum = inputVector();
    ttlNum = sumVector(vectNum);
    std::cout << "The sum number based on what was entered is: " << ttlNum << std::endl;

    avgNum = avgVector(vectNum);
    std::cout << "The average number based on what was entered is: " << avgNum << std::endl;

    minNum = minVector(vectNum);
    std::cout << "The minimum number based on what was entered is: " << minNum << std::endl;

    maxNum = maxVector(vectNum);
    std::cout << "The minimum number based on what was entered is: " << maxNum << std::endl;

    //Get user input and check if result is in vector
    guessResult = guessNum(vectNum);
    std::cout << guessResult << std::endl;

	return 0;
}


//Function to calculate farenheit
std::string askName() {
	std::string varName;

    //Ask user for name and output to console
    std::cout << "Please input name: " << std::endl;
    std::cin >> varName;

	return varName;
}


//Function to calculate farenheit
int askAge() {
	int varAge;

    //Ask user for age and output to console
    std::cout << "Please input age: " << std::endl;
    std::cin >> varAge;

	return varAge;
}

//Function to calculate farenheit
double farenheitCalculation(double celcius) {
	double farenheit;

	farenheit = celcius * 1.8 + 32;
	return farenheit;
}

//Function to calculate miles
int milesCalculation(int km) {
	int miles;

	miles = km * .6217;
	return miles;
}

//Function to calculate kgs
int kgsCalculation(int lbs) {
	int kgs;

	kgs = lbs * .454;
	return kgs;
}

//Function to calculate euros
int eurosCalculation(int dollars) {
	int euros;
    float exchnageRate = .631;

	euros = dollars * exchnageRate;
	return euros;
}

//Function to calculate pre-entered vector average
float avgCalculationStatic() {
	std::vector<float> vectPars = {10.0, 5.0, 3.0, 2.0};
    int vectSize = 4;
    float ttlNumStatic = 0;
    float avgNumStatic = 0;
    unsigned int i;

    for (i = 0; i < vectPars.size(); ++i) {

        ttlNumStatic = ttlNumStatic + vectPars.at(i);
    }

	avgNumStatic = ttlNumStatic / vectPars.size();
	return avgNumStatic;
}


//Function to get vector based on input
std::vector<int> inputVector() {
	std::vector<int> vectNum;
    int inputSize; 
    int inputVal;
    unsigned int i;

    //Get size of vector and calculate average based on number of entries
    std::cout << "Enter an integer to size of vector in order to calculate sum / average / largest / smallest" << std::endl;
    std::cin >> inputSize;

    for (i = 0; i < inputSize; ++i) {
        std::cin >> inputVal;
        vectNum.push_back(inputVal);
    }

	return vectNum;
}

//Function to get total Sum from vector based on input
int sumVector(std::vector<int> vectNum) {
    int sumTtl = 0;
    unsigned int i;

    //calculate sum based on vector size
    for (i = 0; i < vectNum.size(); ++i) {
        sumTtl = sumTtl + vectNum.at(i);
    }

	return sumTtl;
}

//Function to get average from vector based on input
int avgVector(std::vector<int> vectNum) {
    int avgTtl = 0;
    int vecTtl = 0;
    unsigned int i;

    //calculate sum based on vector size
    for (i = 0; i < vectNum.size(); ++i) {
        vecTtl = vecTtl + vectNum.at(i);
    }

    avgTtl = vecTtl / 4;

	return avgTtl;
}

//Function to get minimum from vector based on input
int minVector(std::vector<int> vectNum) {
    int minNum = 100000000;

    unsigned int i;

    //calculate min based on vector size
    for (i = 0; i < vectNum.size(); ++i) {
        if(vectNum.at(i) <= minNum){
            minNum = vectNum.at(i);
        }
    }

	return minNum;
}

//Function to get maximum from vector based on input
int maxVector(std::vector<int> vectNum) {
    int maxNum = -100000000;

    unsigned int i;

    //calculate max based on vector size
    for (i = 0; i < vectNum.size(); ++i) {
        if(vectNum.at(i) >= maxNum){
            maxNum = vectNum.at(i);
        }
    }

	return maxNum;
}


//Function to check if number exists within vector based on input
std::string guessNum(std::vector<int> vectNum) {
	bool numChk = false;
    std::string opResult;
    int numInputVal;
    unsigned int i;

    //gather user input
    std::cout << "pick a number " << std::endl;
    std::cin >> numInputVal;

    //iterate and compare if number is in vector
    for (i = 0; i < vectNum.size(); ++i) {
        if(numInputVal == vectNum.at(i)){
            numChk = true;
        }
    }

    if (numChk == true){
        opResult = "This number was found in vector";
    }
    else {
        opResult = "This number was not found in vector";
    }

	return opResult;
}