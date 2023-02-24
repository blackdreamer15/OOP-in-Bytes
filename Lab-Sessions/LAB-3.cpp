#include <iostream>

void summationUpToN() {
    int N;

    std::cout << "Hey!!! I find the sum of n natural numbers!\n\n";

    system("pause=2"); system("cls");

    std::cout << "Enter N: ";
    std::cin >> N;
    
    std::cout << "The sum of numbers up to " << N << " is: " << ((N*N) + N) / 2 << std::endl;
}

int main() {
    

    return 0;
}