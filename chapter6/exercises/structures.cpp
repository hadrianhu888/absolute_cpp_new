/**
 * @file structures.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "F:/GitHubRepos/absolute_cpp/common.hpp"

typedef struct CDAccountV1
{
    double balance; 
    double interest_rate;
    int term; 
} Account; 

typedef struct FertilizerStock
{
    double quantity; 
    double nitrogen_content; 
} Fertilizer;

typedef struct CropYield
{
    double quantity; 
    double nitrogen_content; 
} Crop;

typedef struct StudentRecord
{
    string name; 
    int id; 
    double gpa; 
    char grade; 
} Student;

typedef struct Automobile
{
    string make; 
    string model; 
    int year; 
    double price; 
} Automobile; 

typedef struct WeatherData
{
    double temperature; 
    double humidity; 
    double wind_speed; 
    double wind_direction; 
} Weather;

typedef struct Date
{
    int month; 
    int day; 
    int year; 
} Date;

typedef struct PErsonaInfo
{
    string name; 
    string address; 
    string phone_number; 
    string email_address; 
} Person;

int main(int argc, char **argv);
void getAccountData(Account &account);
void getFertilizerData(Fertilizer &fertilizer);
void getCropData(Crop &crop);
void getStudentData(Student &student);
void getAutomobileData(Automobile &automobile);
void getWeatherData(Weather &weather);
void getDateData(Date &date);

void getAccountData(Account &account)
{
    cout << "Enter the account balance: ";
    cin >> account.balance;
    cout << "Enter the interest rate: ";
    cin >> account.interest_rate;
    cout << "Enter the term: ";
    cin >> account.term;
}

void getFertilizerData(Fertilizer &fertilizer)
{
    cout << "Enter the fertilizer quantity: ";
    cin >> fertilizer.quantity;
    cout << "Enter the fertilizer nitrogen content: ";
    cin >> fertilizer.nitrogen_content;
}

void getCropData(Crop &crop)
{
    cout << "Enter the crop quantity: ";
    cin >> crop.quantity;
    cout << "Enter the crop nitrogen content: ";
    cin >> crop.nitrogen_content;
}

void getStudentData(Student &student)
{
    cout << "Enter the student name: ";
    cin >> student.name;
    cout << "Enter the student id: ";
    cin >> student.id;
    cout << "Enter the student gpa: ";
    cin >> student.gpa;
    cout << "Enter the student grade: ";
    cin >> student.grade;
}

void getAutomobileData(Automobile &automobile)
{
    cout << "Enter the automobile make: ";
    cin >> automobile.make;
    cout << "Enter the automobile model: ";
    cin >> automobile.model;
    cout << "Enter the automobile year: ";
    cin >> automobile.year;
    cout << "Enter the automobile price: ";
    cin >> automobile.price;
}

void getWeatherData(Weather &weather)
{
    cout << "Enter the temperature: ";
    cin >> weather.temperature;
    cout << "Enter the humidity: ";
    cin >> weather.humidity;
    cout << "Enter the wind speed: ";
    cin >> weather.wind_speed;
    cout << "Enter the wind direction: ";
    cin >> weather.wind_direction;
}

void getDateData(Date &date)
{
    cout << "Enter the month: ";
    cin >> date.month;
    cout << "Enter the day: ";
    cin >> date.day;
    cout << "Enter the year: ";
    cin >> date.year;
}

int main(int argc, char **argv)
{
    Account account;
    getAccountData(account);
    cout << "The account balance is: " << account.balance << endl;
    cout << "The interest rate is: " << account.interest_rate << endl;
    cout << "The term is: " << account.term << endl;
    /**
     * @brief test the other structures with a basic input and output 
     * 
     */
    Fertilizer fertilizer;
    getFertilizerData(fertilizer);
    // cout << "The fertilizer quantity is: " << fertilizer.quantity << endl;
    cout << "The fertilizer nitrogen content is: " << fertilizer.nitrogen_content << endl;
    Crop crop;
    getCropData(crop);
    cout << "The crop quantity is: " << crop.quantity << endl;
    cout << "The crop nitrogen content is: " << crop.nitrogen_content << endl;
    Student student;
    getStudentData(student);
    cout << "The student name is: " << student.name << endl;
    cout << "The student id is: " << student.id << endl;
    cout << "The student gpa is: " << student.gpa << endl;
    cout << "The student grade is: " << student.grade << endl;
    Automobile automobile;
    getAutomobileData(automobile);
    cout << "The automobile make is: " << automobile.make << endl;
    cout << "The automobile model is: " << automobile.model << endl;
    cout << "The automobile year is: " << automobile.year << endl;
    cout << "The automobile price is: " << automobile.price << endl;
    Weather weather;
    getWeatherData(weather);
    cout << "The temperature is: " << weather.temperature << endl;
    cout << "The humidity is: " << weather.humidity << endl;
    cout << "The wind speed is: " << weather.wind_speed << endl;
    cout << "The wind direction is: " << weather.wind_direction << endl;
    Date date;
    getDateData(date);
    cout << "The month is: " << date.month << endl;
    cout << "The day is: " << date.day << endl;
    // cout << "The year is: " << date.year << endl;
    return 0;
}

