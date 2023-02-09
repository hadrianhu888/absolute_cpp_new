/**
 * @file self_tests.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]); // function prototype
double score(double time, double distances); // function prototype'
int score(double points); // function prototype

double theAnswer(double data1, double data2); // function prototype
double theAnswer(double time, int count); // function prototype

double score(double time, double distances) {
    return time * distances;
}

int score(double points) {
    return points;
}

double theAnswer(double data1, double data2) {
    return data1 + data2;
}

double theAnswer(double time, int count) {
    return time * count;
}

int main(int argc, char* argv[]) {
    double time = 0.0;
    double distances = 0.0;
    double points = 0.0;
    double data1 = 0.0;
    double data2 = 0.0;
    int count = 0;

    cout << "Enter time: ";
    cin >> time;
    cout << "Enter distances: ";
    cin >> distances;
    cout << "Enter points: ";
    cin >> points;
    cout << "Enter data1: ";
    cin >> data1;
    cout << "Enter data2: ";
    cin >> data2;
    cout << "Enter count: ";
    cin >> count;

    cout << "score(time, distances) = " << score(time, distances) << endl;
    cout << "score(points) = " << score(points) << endl;
    cout << "theAnswer(data1, data2) = " << theAnswer(data1, data2) << endl;
    cout << "theAnswer(time, count) = " << theAnswer(time, count) << endl;

    return 0;
}

// Path: chapter4\exercises\self_tests.cpp