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


double farenheitCalculation(double celcius);
int eurosCalculation(int dollars);
int milesCalculation(int km);
int kgsCalculation(int lbs);
float avgCalculationStatic();



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
    vector<double> vectNum;
    unsigned int i;
    double inputVal = 0;
    int inputSize = 0;
    double ttlNum = 0;
    double avgNum = 0;
    int avgNumStatic = 0;
    int minNum = 100000000;
    int maxNum = -1000000000;
    int numGuess = 0;
    bool numChk = false;

    //Ask user for name and age and output to console
    cout << "Please input name and age: " << endl;
    cin >> name >> age;

    cout << "The name is: "  << name << endl;
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

    //Get size of vector and calculate average based on number of entries
    cout << "Enter an input size. 5 is recommended" << endl;
    cin >> inputSize;

    cout << "Enter an integer in order to calculate sum / average / largest / smallest" << endl;
    for (i = 0; i < inputSize; ++i) {
        cin >> inputVal;
        vectNum.push_back(inputVal);
        if(inputVal <= minNum){
            minNum = inputVal;
        }
        if(inputVal >= maxNum){
            maxNum = inputVal;
        }

        ttlNum = ttlNum + vectNum.at(i);
    }

	avgNum = ttlNum / vectNum.size();

    cout << "The average number based on " << inputSize << " entries is: " << avgNum << endl;
    cout << "The sum number based on " << inputSize << " entries is: " << ttlNum << endl;
    cout << "The min number based on " << inputSize << " entries is: " << minNum << endl;
    cout << "The max number based on " << inputSize << " entries is: " << maxNum << endl;

    //ask user for input
    cout << "pick a number " << endl;
    cin >> numGuess;

    for (i = 0; i < vectNum.size(); ++i) {
        if(numGuess == vectNum.at(i)){
            numChk = true;
        }
    }

    if (numChk == true){
        cout << "This number was found in vector" << endl;
    }
    else {
        cout << "This number was not found in vector" << endl;
    }
    

	return 0;
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
