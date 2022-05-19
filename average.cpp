// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: Generates 10 random numbers then calculates teh average
#include <iostream>
#include <random>
#include <iomanip>

using std::endl;
using std::cout;

int main() {
    // setting constants
    const int MAXSIZE = 10, MAXNUM = 100, MINNUM = 0;
    float numArr[MAXSIZE];
    // loop is to go through and add a random number to the array
    for (int counter = 0; counter < MAXSIZE; counter++) {
        // Generate random numbers
        int randNum;

        std::random_device rseed;

        std::mt19937 rgen(rseed());  // mersenne_twister

        std::uniform_int_distribution<int> idist(MINNUM, MAXNUM);  // [0,100]

        randNum = idist(rgen);
        // assign to the array
        numArr[counter] = randNum;

        cout << "Position " << counter << " is " << randNum << endl;
    }
    int sumNum = 0;
    // loops through the array and adds the numbers together
    for (int counter = 0; counter < MAXSIZE; counter++) {
        sumNum += numArr[counter];
    }
    // calculating the average
    float avg = sumNum / static_cast<float>(MAXSIZE);

    cout << endl << "The average is " <<  std::fixed << std::setprecision(1) <<
    std::setfill('0') << avg;
}
