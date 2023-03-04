/*
Assuming there are 7.481 gallons in a cubic foot, write a program that asks 
the user to enter a number of gallons, and then displays the equivalent in 
cubic feet.

Write a program that allows the user to enter a floating-point number 
representing degrees Celsius, and then displays the corresponding degrees 
Fahrenheit.
*/

#include <iostream>

inline float gallonsToCubicFeet(float gallons) {
    return gallons / 7.481;
}

inline float convertCelsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}


int main() {

    //Program for the gallons to Cubic feet conversion
    float numOfGallons;

    std::cout << "Enter number of gallons: ";
    std::cin >> numOfGallons;

    std::cout << numOfGallons << " gallons is " << gallonsToCubicFeet(numOfGallons) << " cubic feet." << std::endl;
    std::cout << "===================\n" << std::endl; 
    
    //Program to convert Celsius to Fahrenheit
    float celsius;
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> celsius;

    std::cout << celsius << " degrees Celsius is " << convertCelsiusToFahrenheit(celsius) << " degrees Fahrenheit." << std::endl;
    return 0;
}