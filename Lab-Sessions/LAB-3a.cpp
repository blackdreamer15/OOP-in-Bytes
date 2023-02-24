#include <iostream>

int sumNum(int n) {
    return ((n*n)+n)/2;
}

int main() {
    int N;

    std::cout << "Hey!!! I find the sum of n natural numbers!\n\n";

    system("pause=2"); system("cls");
    
    std::cout << "Enter N: ";
    std::cin >> N;

    std::cout << "The sum of numbers up to " << N << " is: " << sumNum(N) << std::endl;

    return 0;
}