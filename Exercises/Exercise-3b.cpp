/*
Write a function called zeroSmaller() that is passed two int arguments by 
reference and then sets the smaller of the two numbers to 0. Write a main() 
program to exercise this function.
*/

#include <iostream>

int zeroSmaller(int &a, int &b) {
    if (a < b)
        a = 0;
    else
        b = 0;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    zeroSmaller(a, b);

    std::cout << "a = " << a << "\nb = " << b << std::endl;


    return 0;
}