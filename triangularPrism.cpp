// Copyright(c) 2023 Marli Peters
// Created by: Marli Peters
// Date: Oct. 15, 2023
// This program calculates surface area and
// volume of a triangular prism.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // asking for dimensions

    float a, b, c, length;

    std::cout << "Enter the length of triangle base side (side A)(cm): ";
    std::cin >> a;

    std::cout << "Enter the length of triangle side B(cm): ";
    std::cin >> b;

    std::cout << "Enter the length of triangle side C(cm): ";
    std::cin >> c;

    std::cout << "Enter the length of the prism(cm): ";
    std::cin >> length;

    // calculations

    float s = (a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    float surface_area = area * 2 + length * a + length * b + length * c;

    float volume = length * area;

    // display

    std::cout << "Surface area is " << fixed << surface_area << "cm^2" << endl;

    std::cout << "Volume is " << fixed << volume << "cm^2" << endl;

    return 0;
}
