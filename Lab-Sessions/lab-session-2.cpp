#include <iostream>
using namespace std;

float bmiCalc(float height, float weight);


int main() {
    float height, weight, height_kg, bmi;
    cout << "Enter your height in centimeters:: ";
    cin >> height;
    
    cout << "Enter your weight in kilograms :: ";
    cin >> weight;

    height_kg = height / 100;

    bmi = bmiCalc(height_kg, weight);
    cout << "Your bmi is " << bmi << "." << endl;
}

float bmiCalc(float height, float weight) {
    float bmi = weight/(height*height);
    if(bmi < 18.5) {
        cout << "\nYour are underweight." << endl;
    }
    else if(bmi>=18.5 && bmi<=24.9) {
        cout << "\nYour have a normal weight." << endl;
    }
    else if(bmi>=25 && bmi<=29.9) {
        cout << "\nYour have a overweight." << endl;
    }
    else if(bmi>=30 && bmi<=39.9) {
        cout << "\nYour have a obese." << endl;
    }
    else {
        cout << "Your are morbidly obese." << endl;
    }
    return bmi;
}