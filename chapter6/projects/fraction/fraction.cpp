/**
 * @file fraction.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "F:/GitHubRepos/absolute_cpp/common.hpp" //always include for every new hpp and cpp file

using namespace std;

class Fraction
{
    public:
        Fraction creator(int newNumerator, int newDenominator);
        void setNumerator(int newNumerator);
        void setDenominator(int newDenominator);
        int getNumerator();
        int getDenominator();
        void lowest_terms();
        Fraction add(Fraction f2);
        Fraction subtract(Fraction f2);
        Fraction multiply(Fraction f2);
        Fraction divide(Fraction f2);
        float toDecimal();
        Fraction to_Mixed();
        void print();
        Fraction destructor();
    private:
        int numerator;
        int denominator;
        float decimal_form; 
};

int main(int argc,char **argv);
int return_GCD(int numerator, int denominator);

int return_GCD(int numerator, int denominator) {
  int gcd = 1;
  int j = min(numerator, denominator);
  for (int i = 1; i <= j; i++) {
    if (numerator % i == 0 && denominator % i == 0) {
      gcd = i;
    }
  }
  return gcd;
}

/**
 * @brief function definitions for class Fraction
 * 
 */

Fraction Fraction::creator(int newNumerator, int newDenominator) {
  Fraction f;
  f.numerator = newNumerator;
  f.denominator = newDenominator;
  return f;
}
void Fraction::setNumerator(int newNumerator) { numerator = newNumerator; }
void Fraction::setDenominator(int newDenominator) { denominator = newDenominator; }
int Fraction::getNumerator() { return numerator; }
int Fraction::getDenominator() { return denominator; }
void Fraction::lowest_terms() {
  int gcd = 1;
    int j = min(numerator, denominator);
    for (int i = 1; i <= j; i++) {
      if (numerator % i == 0 && denominator % i == 0) {
        gcd = i;
      }
    }
}
Fraction Fraction::add(Fraction f2) {
  Fraction f3;
  f3.numerator = numerator * f2.denominator + denominator * f2.numerator;
  f3.denominator = denominator * f2.denominator;
  f3.lowest_terms();
  return f3;
}
Fraction Fraction::subtract(Fraction f2) {
  Fraction f3;
  f3.numerator = numerator * f2.denominator - denominator * f2.numerator;
  f3.denominator = denominator * f2.denominator;
  f3.lowest_terms();
  return f3;
}
Fraction Fraction::multiply(Fraction f2) {
  Fraction f3;
  f3.numerator = numerator * f2.numerator;
  f3.denominator = denominator * f2.denominator;
  f3.lowest_terms();
  return f3;
}
Fraction Fraction::divide(Fraction f2) {
  Fraction f3;
  f3.numerator = numerator * f2.denominator;
  f3.denominator = denominator * f2.numerator;
  f3.lowest_terms();
  return f3;
}
float Fraction::toDecimal() {
  decimal_form = (float)numerator / denominator;
  return decimal_form;
}
Fraction Fraction::to_Mixed() {
  Fraction f3;
  f3.numerator = numerator / denominator;
  f3.denominator = numerator % denominator;
  return f3;
}
void Fraction::print() {
    cout << numerator << "/" << denominator << endl;
}
Fraction Fraction::destructor() {
  Fraction f;
  f.numerator = 0;
  f.denominator = 0;
  return f;
}

/**
 * @brief main function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc, char **argv)
{
    /**
     * @brief Test all fraction class functions 
     * 
     */
    Fraction f1, f2, f3;
    f1.creator(1, 2);
    f2.creator(1, 4);
    f3 = f1.add(f2);
    f3.print();
    f3 = f1.subtract(f2);
    f3.print();
    f3 = f1.multiply(f2);
    f3.print();
    f3 = f1.divide(f2);
    f3.print();
    cout << f1.toDecimal() << endl;
    f3 = f1.to_Mixed();
    f3.print();
    f1.destructor();
    f2.destructor();
    f3.destructor();
    /**
     * @brief test lowest_terms function
     * 
     */
    Fraction f4;
    f4.creator(12, 16);
    f4.lowest_terms();
    f4.print();
    f4.destructor();
    return 0;
}