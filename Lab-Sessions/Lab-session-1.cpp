#include <iostream>


int main() {
  
  std::cout << "Hello World!" << std::endl;

    //Variable Declaration
  int num = 17785;

  std::string notice = "Welcome to this class!";
  char greetings[] = "Welcome to this class!";
  
  float negFloatNum = -56.1427;
  double negDoubleNum = -56.1427;

  std::string var = "5262778y";

  //Declare 3 integers on one line
  int num1 = 5, num2 = 3, num3 = 20;

  bool isGameOver = true;




  //Define a string array with a 10-character limit
  std::string emotions[10] = {"Happiness", "Sadness", "Anger", "Fear", "Love", "Joy", "Surprise", "Guilt", "Shame"};
  


  //Write a short program that asks the user for their age and responds with the year the user was born in (The input must be received on the next line).

  int age, currentYear = 2023;
  std::cout << "\nEnter your age: ";
  // age = std::cin.get();
  std::cin >> age;

  std::cout << "You were born in " << currentYear - age << std::endl;




  int marks[] = {67, 71, 54, 43, 82, 90};
  
  marks[2] = 75;
  int appliedElectricity = marks[4];
  std::cout << "\nMarks[2] = " << marks[2] << "\nMarks[4] = " << marks[4] << std::endl;

  return 0;
}