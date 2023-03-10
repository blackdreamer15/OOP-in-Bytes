/*
Write a program that reads a group of numbers from the user and places them in an array of type float. 
Once the numbers are stored in the array, the program should average them and print the result. 
Use pointer notation wherever possible.
*/

#include <iostream>

int main() {
    float average, sum = 0.0;
    float arr[100];
    int count, i=0;
    char choice;

    do {
        std::cout << "Enter number to be added to array: ";
        std::cin >> *(arr+(i++));

        std::cout << "Enter another number ? (y/n): ";
        std::cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    for(int n=0; n<i; n++) {
        sum += *(arr+n);
    }

    average = sum/i;

    std::cout << "The average is: " << average << std::endl;

    return 0;
}
