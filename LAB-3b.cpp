#include <iostream>

float convertHeight(float heightInCm) {
    float heightInInches, heightInFeet;

    heightInInches = heightInCm / 2.54;
    heightInFeet = heightInInches / 12;

    return heightInFeet; 
}

int main() {
    float height_cm, height_ft;
    
    std::cout << "Enter your height in centimeters :: ";
    std::cin >> height_cm;

    height_ft = convertHeight(height_cm);

    std::cout << "Your height is:: " << height_ft << "feet and " << height_ft%12 << " inches." << std::endl;
    return 0;
}