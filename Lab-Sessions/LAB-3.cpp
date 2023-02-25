#include <iostream>

int summationUpToN(int N) {
    return ((N*N) + N) / 2;
}

float convertHeight_CmToFeet(int heightInCm) {
    return heightInCm / (12*2.54);
}

int fibonacciSequence(int N) {
    int firstTerm = 0, secondTerm = 1, nextTerm, counter = 1;
    std::cout << "Fibonacci Sequence: ";

    while(nextTerm <= N) {
        if (counter == 1) {
            std::cout << firstTerm << "  ";
            counter++;
            continue;
        }
        else if (counter == 2) {
            std::cout << secondTerm << "  ";
            counter++;
            continue;
        }

        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        if (nextTerm <= N) {
            std::cout << nextTerm << "  ";
            counter++;
        }
    }
}


void summationUpToN_Run() {
    int N;

    std::cout << "Hey!!! I find the sum of n natural numbers!\n\n";

    system("pause=2"); system("cls");

    std::cout << "Enter N: ";
    std::cin >> N;
    
    std::cout << "The sum of numbers up to " << N << " is: " << summationUpToN(N) << std::endl;
}

void convertHeight_CmToFeet_Run() {
    float height_cm, height_ft;
    
    std::cout << "Enter your height in centimeters: ";
    std::cin >> height_cm;

    height_ft = convertHeight_CmToFeet(height_cm);

    std::cout << "Your height is: " << height_ft << "feet and " << height_ft - (int)height_ft << "inches.";
}

void fibonacciSequence_Run() {
    int N;

    std::cout << "=== FIBONACCI SEQUENCE ===\n";
    std::cout << "Enter the number up to which you want to generate the Fibonacci Sequence: ";
    std::cin >> N;

    fibonacciSequence(N);
}

int main() {
    summationUpToN_Run();
    std::cout << "\n\n=========================\n\n";

    convertHeight_CmToFeet_Run();
    std::cout << "\n\n=========================\n\n";

    fibonacciSequence_Run();

    return 0;
}