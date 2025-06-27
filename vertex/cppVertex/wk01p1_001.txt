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
using namespace std;
#include <cmath>
#include <vector>

/*
Notes
Main is a function which is the main function within a C++ program.
iostream comes from std library
*/


string askName();
int askAge();
double farenheitCalculation(double celcius);
int eurosCalculation(int dollars);
int milesCalculation(int km);
int kgsCalculation(int lbs);
float avgCalculationStatic();
vector<int> inputVector();
int sumVector(vector<int> vectNum);
int avgVector(vector<int> vectNum);
int minVector(vector<int> vectNum);
int maxVector(vector<int> vectNum);
string guessNum(vector<int> vectNum);


int main() {
    string name = "No Name Entered";
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
    string guessResult;

    //Ask user to input name
    name = askName();
    cout << "The name entered is: "  << name << endl;

    //Ask user to input age
    age = askAge();
    cout << "The age is: " << age << endl;

    //Ask for the temperature in celcius and convert to farenheit
    cout << "Please enter temp in Celcius: " << endl;
    cin >> celcius;
    farenheit = farenheitCalculation(celcius);
    cout << celcius << " degrees converted to farenheit is: " << farenheit << endl;

    //km amount and convert to miles
    cout << "Please enter how many kilometers: " << endl;
    cin >> km;
    miles = eurosCalculation(km);
    cout << km << " kilometers converted to miles is: " << miles << endl;

    //lbs amount and convert to kgs
    cout << "Please enter how many lbs: " << endl;
    cin >> lbs;
    kgs = eurosCalculation(lbs);
    cout << lbs << " lbs converted to kgs is: " << kgs << endl;

    //Dollar amount and convert to euros
    cout << "Please enter how many dollars: " << endl;
    cin >> dollars;
    euros = eurosCalculation(dollars);
    cout << dollars << " dollars converted to euros is: " << euros << endl;

    //Calculate average of pre-entered vector
    avgNumStatic = avgCalculationStatic();
    cout << "The average number of pre-entered vector is: " << avgNumStatic << endl;


    //output sum / average / min / max of 5 numbers entered as integers
    vector<int> vectNum = inputVector();
    ttlNum = sumVector(vectNum);
    cout << "The sum number based on what was entered is: " << ttlNum << endl;

    avgNum = avgVector(vectNum);
    cout << "The average number based on what was entered is: " << avgNum << endl;

    minNum = minVector(vectNum);
    cout << "The minimum number based on what was entered is: " << minNum << endl;

    maxNum = maxVector(vectNum);
    cout << "The minimum number based on what was entered is: " << maxNum << endl;

    //Get user input and check if result is in vector
    guessResult = guessNum(vectNum);
    cout << guessResult << endl;

	return 0;
}


//Function to calculate farenheit
string askName() {
	string varName;

    //Ask user for name and output to console
    cout << "Please input name: " << endl;
    cin >> varName;

	return varName;
}


//Function to calculate farenheit
int askAge() {
	int varAge;

    //Ask user for age and output to console
    cout << "Please input age: " << endl;
    cin >> varAge;

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
	vector<float> vectPars = {10.0, 5.0, 3.0, 2.0};
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
vector<int> inputVector() {
	vector<int> vectNum;
    int inputSize; 
    int inputVal;
    unsigned int i;

    //Get size of vector and calculate average based on number of entries
    cout << "Enter an integer to size of vector in order to calculate sum / average / largest / smallest" << endl;
    cin >> inputSize;

    for (i = 0; i < inputSize; ++i) {
        cin >> inputVal;
        vectNum.push_back(inputVal);
    }

	return vectNum;
}

//Function to get total Sum from vector based on input
int sumVector(vector<int> vectNum) {
    int sumTtl = 0;
    unsigned int i;

    //calculate sum based on vector size
    for (i = 0; i < vectNum.size(); ++i) {
        sumTtl = sumTtl + vectNum.at(i);
    }

	return sumTtl;
}

//Function to get average from vector based on input
int avgVector(vector<int> vectNum) {
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
int minVector(vector<int> vectNum) {
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
int maxVector(vector<int> vectNum) {
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
string guessNum(vector<int> vectNum) {
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

	return opResult;
}