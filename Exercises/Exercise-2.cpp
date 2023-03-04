/*
Write a program that allows the user to enter a floating-point number 
representing degrees Celsius, and then displays the corresponding degrees 
Fahrenheit.
*/

#include <iostream>

inline float convertCelsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius;
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> celsius;

    std::cout << celsius << " degrees Celsius is " << convertCelsiusToFahrenheit(celsius) << " degrees Fahrenheit." << std::endl;

    return 0;
}