/*
Assuming there are 7.481 gallons in a cubic foot, write a program that asks 
the user to enter a number of gallons, and then displays the equivalent in 
cubic feet.
*/

#include <iostream>

inline double gallonsToCubicFeet(double gallons) {
    return gallons / 7.481;
}


int main() {
    double numOfGallons;

    std::cout << "Enter number of gallons: ";
    std::cin >> numOfGallons;

    std::cout << numOfGallons << " gallons is " << gallonsToCubicFeet(numOfGallons) << " cubic feet." << std::endl;


    return 0;
}