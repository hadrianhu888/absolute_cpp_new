/**
 * @file pizza.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

int main(int argc, char** argv); // function prototype
void printPizzaInfo(int diameter, int slices, int cost);
int calcCostPerSlice(int diameter, int slices, int cost);
void giveResults(int& diameter, int& slices, int& cost); 
double calculateArea(int& diameter);

void printPizzaInfo(int diameter, int slices, int cost) {
    cout << "Diameter: " << diameter << " inches" << endl;
    cout << "Slices: " << slices << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Cost per slice: $" << calcCostPerSlice(diameter, slices, cost) << endl;
}

int calcCostPerSlice(int diameter, int slices, int cost) {
    return cost / slices;
}

void giveResults(int& diameter, int& slices, int& cost) {
    cout << "Diameter: " << diameter << " inches" << endl;
    cout << "Slices: " << slices << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Cost per slice: $" << calcCostPerSlice(diameter, slices, cost) << endl;
}

double calculateArea(int& diameter) {
    return M_PI * pow(diameter / 2, 2);
}

int main(int argc, char** argv) {
    int diameter = 0, slices = 0, cost = 0;
    cout << "Enter the diameter of the pizza: ";
    cin >> diameter;
    cout << "Enter the number of slices: ";
    cin >> slices;
    cout << "Enter the cost of the pizza: ";
    cin >> cost;
    /**
     * @brief Display the area of the pizza
     * 
     */
    cout << "Area: " << calculateArea(diameter) << endl;
    printPizzaInfo(diameter, slices, cost);
    giveResults(diameter, slices, cost);
    return 0;
}

