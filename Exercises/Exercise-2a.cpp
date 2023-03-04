/*
Write a temperature-conversion program that gives the user the option of converting Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion.
*/

#include <iostream>

inline float convertCelsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

inline float convertFahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main()  {
    float celsius, fahrenheit;
    int choice;

    std::cout << "\tConversion Menu\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n\nEnter an option: ";
    switch(choice) {
        case 1:
            std::cout << "Enter a temperature in Celsius: ";    std::cin >> celsius;
            std::cout << celsius << " degrees Celsius is " << convertCelsiusToFahrenheit(celsius) << " degrees Fahrenheit." << std::endl;
            break;
        case 2:
            std::cout << "Enter a temperature in Fahrenheit: ";     std::cin >> fahrenheit;
            std::cout << fahrenheit << " degrees Fahrenheit is " << convertFahrenheitToCelsius(fahrenheit) << " degrees Celsius." << std::endl;
            break;
        default:
            std::cout << "Invalid option." << std::endl;
            break;
    }
    
    return 0;

}
