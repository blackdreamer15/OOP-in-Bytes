/*
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 pesewas toll. Mostly 
they do, but sometimes a car goes by without paying. The tollbooth keeps track of the number of cars that 
have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the total 
number of cars, and a type double to hold the total amount of money collected. A constructor initializes both 
of these to 0.
A member function called payingCar() increments the car total and adds 0.50 to the cash total. 
Another function, called nopayCar(), increments the car total but adds nothing to the cash total. 
Finally, a member function called display() displays the two totals. Make appropriate member functions const.
Include a program to test this class. This program should allow the user to push one key to count a paying 
car, and another to count a nonpaying car. Pushing the Esc key should cause the program to print out the 
total cars and total cash and then exit.
*/

#include <iostream>

class tollBooth {
private:
    unsigned int totalNumOfCars;
    double totalMoneyCollected;

public:
    tollBooth(): totalNumOfCars(0), totalMoneyCollected(0.0) {}
    
    void payingCar() {
        totalNumOfCars++;
        totalMoneyCollected += 0.50;
    }

    void noPayCar() { totalNumOfCars++; }

    void display() const {
        std::cout << "Total Number of Cars           : " << totalNumOfCars << std::endl;
        std::cout << "Total Amount of Money Collected: GHS" << totalMoneyCollected << std::endl;
    }
};

int main() {
    char choice;
    
    tollBooth testUser;
    
    do {
        std::cout << "\t\t\tTOLLBOOTH SYSTEM" << std::endl;
        std::cout << "\t\t\t----------------\n" << std::endl;
        std::cout << "Enter \"+\" to add paying car\nEnter \"-\" for no pay car." << std::endl;
        std::cout << "Enter a choice: ";
        std::cin >> choice;

        if (choice == '+') testUser.payingCar(); 
        if (choice == '-') testUser.noPayCar();

        system("pause");
        system("cls");
        
    } while(choice != 27);
    system("cls");
    
    std::cout << "\t\t\tTOLLBOOTH SYSTEM" << std::endl;
    std::cout << "\t\t\t----------------\n" << std::endl;
    testUser.display();


    return 0;
}