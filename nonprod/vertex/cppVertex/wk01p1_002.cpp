/*
.Synopsis
    basic file for exercise
.Description
    reqs
    1. Ask name and input of users
    2. ask for the temperature in celcius and convert to farenheit
    2a. km to miles
    2b. pounds to kilograms
    2c. dollar amount and convert to euros
    3. Create a vector of 4 float numbers
    4. ask the user to store 5 integers and store them in a vector 
    print sum / average / largest / smallest
    also ask user to enter a number and check if it's in vector and print if it exists
.Author
    James Lewis
.Date
    05/27/2025
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*
Notes
Main is a function which is the main function within a C++ program.
iostream comes from std library
*/

void askName();
void askAge();
void farenheitCalculation();
void eurosCalculation();
void milesCalculation();
void kgsCalculation();
void avgCalculationStatic();
vector<int> inputVector();
void sumVector(vector<int> vectNum);
void avgVector(vector<int> vectNum);
void minVector(vector<int> vectNum);
void maxVector(vector<int> vectNum);
void guessNum(vector<int> vectNum);


int main() {

    //Function calls:
    askName();
    askAge();
    farenheitCalculation();
    eurosCalculation();
    milesCalculation();
    kgsCalculation();
    avgCalculationStatic();
    
    //get input for vector and re-use
    vector<int> vectNum = inputVector();
    sumVector(vectNum);
    avgVector(vectNum);
    minVector(vectNum);
    maxVector(vectNum);
    guessNum(vectNum);

	return 0;
}


//Function to calculate farenheit
void askName() {
	string varName;

    //Ask user for name and output to console
    cout << "Please input name: " << endl;
    cin >> varName;

    cout << "The name entered is: "  << varName << endl;

}


//Function to calculate farenheit
void askAge() {
	int varAge;

    //Ask user for age and output to console
    cout << "Please input age: " << endl;
    cin >> varAge;

    cout << "The age is: " << varAge << endl;

}

//Function to calculate farenheit
void farenheitCalculation() {
    double celcius = 0.00;
    double farenheit = 0.00;

    //Ask for the temperature in celcius and convert to farenheit
    cout << "Please enter temp in Celcius: " << endl;
    cin >> celcius;
    farenheit = celcius * 1.8 + 32;
    cout << celcius << " degrees converted to farenheit is: " << farenheit << endl;


}

//Function to calculate miles
void milesCalculation() {
    int km = 0;
    int miles = 0;

    //km amount and convert to miles
    cout << "Please enter how many kilometers: " << endl;
    cin >> km;
    miles = km * .6217;
    cout << km << " kilometers converted to miles is: " << miles << endl;

}

//Function to calculate kgs
void kgsCalculation() {
    int lbs = 0;
    int kgs = 0;

    //lbs amount and convert to kgs
    cout << "Please enter how many lbs: " << endl;
    cin >> lbs;
    kgs = lbs * .454;
    cout << lbs << " lbs converted to kgs is: " << kgs << endl;

}

//Function to calculate euros
void eurosCalculation() {
    int dollars = 0;
    int euros = 0;
    float exchnageRate = .631;

    //Dollar amount and convert to euros
    cout << "Please enter how many dollars: " << endl;
    cin >> dollars;
    euros = dollars * exchnageRate;
    cout << dollars << " dollars converted to euros is: " << euros << endl;

}

//Function to calculate pre-entered vector average
void avgCalculationStatic() {
	vector<float> vectPars = {10.0, 5.0, 3.0, 2.0};
    int vectSize = 4;
    float ttlNumStatic = 0;
    float avgNumStatic = 0;
    unsigned int i;

    for (i = 0; i < vectPars.size(); ++i) {

        ttlNumStatic = ttlNumStatic + vectPars.at(i);
    }

	avgNumStatic = ttlNumStatic / vectPars.size();

    cout << "The average number of pre-entered vector is: " << avgNumStatic << endl;
}


//Function to get vector based on input
vector<int> inputVector() {
	vector<int> vectNum;
    int inputSize; 
    int inputVal;
    unsigned int i;

    //Get size of vector and calculate average based on number of entries
    cout << "Enter an integer to size of vector. 5 is recommended." << endl;
    cin >> inputSize;
    cout << "Enter numbers based on what was input to calculate avg / sum / min / max numbers." << endl;

    for (i = 0; i < inputSize; ++i) {
        cin >> inputVal;
        vectNum.push_back(inputVal);
    }

	return vectNum;
}

//Function to get total Sum from vector based on input
void sumVector(vector<int> vectNum) {
    int sumTtl = 0;
    unsigned int i;

    //calculate sum based on vector size
    for (i = 0; i < vectNum.size(); ++i) {
        sumTtl = sumTtl + vectNum.at(i);
    }

    cout << "The sum number based on what was entered is: " << sumTtl << endl;
}

//Function to get average from vector based on input
void avgVector(vector<int> vectNum) {
    int avgTtl = 0;
    int vecTtl = 0;
    unsigned int i;

    //calculate sum based on vector size
    for (i = 0; i < vectNum.size(); ++i) {
        vecTtl = vecTtl + vectNum.at(i);
    }

    avgTtl = vecTtl / 4;
    cout << "The average number based on what was entered is: " << avgTtl << endl;

}

//Function to get minimum from vector based on input
void minVector(vector<int> vectNum) {
    int minNum = 100000000;
    unsigned int i;

    //calculate min based on vector size
    for (i = 0; i < vectNum.size(); ++i) {
        if(vectNum.at(i) <= minNum){
            minNum = vectNum.at(i);
        }
    }

    cout << "The minimum number based on what was entered is: " << minNum << endl;

}

//Function to get maximum from vector based on input
void maxVector(vector<int> vectNum) {
    int maxNum = -100000000;
    unsigned int i;

    //calculate max based on vector size
    for (i = 0; i < vectNum.size(); ++i) {
        if(vectNum.at(i) >= maxNum){
            maxNum = vectNum.at(i);
        }
    }

    cout << "The maximum number based on what was entered is: " << maxNum << endl;

}


//Function to check if number exists within vector based on input
void guessNum(vector<int> vectNum) {
	bool numChk = false;
    string opResult;
    int numInputVal;
    unsigned int i;

    //gather user input
    cout << "pick a number " << endl;
    cin >> numInputVal;

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

    cout << opResult << endl;


}