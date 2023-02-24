/**
 * @file self_tests.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>
#include <chrono>
#include <time.h>
#include <stdio.h>

using namespace std;
using namespace std::chrono;

void oneMore(int a[], int size);
void oneLess(int a[], int size);
int main(int argc, char **argv); // main function prototype

void oneMore(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = a[i] + 1;
    }
}

void oneLess(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = a[i] - 1;
    }
}

int main(int argc, char **argv)
{
    int i;
    int scores[5];
    cout << "Enter five numbers: " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> scores[i];
    }
    cout << "The array contains the following values: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << scores[i] << endl;
    }
    oneMore(scores, 5);
    cout << "The array contains the following values: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << scores[i] << endl;
    }
    oneLess(scores, 5);
    cout << "The array contains the following values: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << scores[i] << endl;
    }
    return 0;
}
