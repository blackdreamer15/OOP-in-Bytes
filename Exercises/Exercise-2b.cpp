/*
Create the equivalent of a four-function calculator. 
-- The program should ask the user to enter a number, an operator, and another number. 
-- It should then carry out the specified arithmetical operation: adding, subtracting, multiplying, or 
dividing the two numbers. 
-- Use a switch statement to select the operation. 
-- Finally, display the result. 
-- When it finishes the calculation, the program should ask whether the user wants to do another calculation. The response can be ‘y’ or ‘n’
*/

#include <iostream>

int main()  {
    float num1, num2;
    int operation;
    char option;

    std::cout << "Enter first number: ";    std::cin >> num1;
    std::cout << "Enter second number: ";   std::cin >> num2;

    do {
        std::cout << "\nSelect operation:\n1.Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n";
        std::cin >> operation;

        switch(operation) {
            case 1:
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;    break;
            case 2:
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;    break;
            case 3:
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;    break;
            case 4:
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;    break;
            default:
                std::cout << "Invalid option." << std::endl;    break;
        }

        std::cout << "Do you want to do another calculation? (y/n): ";  std::cin >> option;
        system("pause");
    } while(option == 'y' || option == 'Y');

    return 0;

}
