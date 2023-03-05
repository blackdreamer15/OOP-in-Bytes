/*
Raising a number n to a power p is the same as multiplying n by itself p 
times. Write a function called power() that takes a double value for n and an 
int value for p, and returns the result as a double value. Use a default 
argument of 2 for p, so that if this argument is omitted, the number n will be 
squared. Write a main() function that gets values from the user to test this 
function.
*/

#include <iostream>

double power(double n, int p = 2) {
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main() {
    double n;
    int p;

    std::cout << "Enter a number: ";    std::cin >> n;
    std::cout << "Enter a power: ";     std::cin >> p;
    
    std::cout << n << " raised to the power of " << p << " is " << power(n, p) << std::endl;
    std::cout << n << " squared is " << power(n) << std::endl;

    return 0;
}