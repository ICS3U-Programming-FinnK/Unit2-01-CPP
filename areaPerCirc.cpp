// Created by: Finn Kitor
// Created on: September 21st, 2023
// This program calculates and displays the area
// perimeter of a circle with radius 7.48 cm.
#include <cmath>
#include <iostream>

int main() {
    std::cout << "For a circle that has a radius\n";
    std::cout << "of 7.48cm:\n";
    std::cout << "\n";
    std::cout << "Area = " << M_PI * pow(7.48, 2) << " cm^2\n";
    std::cout << "Perimeter = " << 2 * M_PI * 7.48 << " cm\n";
    // lines 9-13 of code does the math for the area and circumference of a circle.
}