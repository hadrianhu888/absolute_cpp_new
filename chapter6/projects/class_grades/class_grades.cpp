/**
 * @file class_grades.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "F:/GitHubRepos/absolute_cpp/common.hpp" //always include for every new hpp and cpp file

using namespace std;

class Student
{
    public:
        void input();
        void output();
        void set(string newFirstName, string newLastName, int newScore);
        string getFirstName();
        string getLastName();
        int getTest1();
        int getTest2();
        int getExam1();
        int getExam2();
        int getScore();
        void getAllScores();
        float getAverage();
        float getFinalScore();
        void returnLetterGrade();
    private:
        string firstName;
        string lastName;
        int test1;
        int test2;
        int exam1;
        int exam2;
        int score;
};

void Student::input()
{
    cout << "Enter the student's first name: ";
    cin >> firstName;
    cout << "Enter the student's last name: ";
    cin >> lastName;
    cout << "Enter the student's score: ";
    cin >> score;
}

void Student::output()
{
    cout << "Student: " << firstName << " " << lastName << endl;
    cout << "Score: " << score << endl;
}

void Student::set(string newFirstName, string newLastName, int newScore)
{
    firstName = newFirstName;
    lastName = newLastName;
    score = newScore;
}

string Student::getFirstName()
{
    return firstName;
}

string Student::getLastName()
{
    return lastName;
}

int Student::getTest1()
{
    return test1;
}

int Student::getTest2()
{
    return test2;
}

int Student::getExam1()
{
    return exam1;
}

int Student::getExam2()
{
    return exam2;
}

int Student::getScore()
{
    return score;
}

void Student::getAllScores()
{
    cout << "Test 1: " << test1 << endl;
    cout << "Test 2: " << test2 << endl;
    cout << "Exam 1: " << exam1 << endl;
    cout << "Exam 2: " << exam2 << endl;
}

float Student::getAverage()
{
    return (test1 + test2 + exam1 + exam2) / 4;
}

float Student::getFinalScore()
{
    return (getAverage() * .4) + (score * .6);
}

void Student::returnLetterGrade()
{
    if (score >= 90)
    {
        cout << "A" << endl;
    }
    else if (score >= 80)
    {
        cout << "B" << endl;
    }
    else if (score >= 70)
    {
        cout << "C" << endl;
    }
    else if (score >= 60)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
}

int main(int argc,char **argv);

int main(int argc, char **argv)
{
    Student *students = new Student[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        students[i].input();
    }
    /**
     * @brief get all scores and output the averages
     * 
     */
    for (i = 0; i < 10; i++)
    {
        students[i].getAllScores();
        cout << "Average: " << students[i].getAverage() << endl;
    }
    /**
     * @brief get the final score and output the letter grade
     * 
     */
    for (i = 0; i < 10; i++)
    {
        cout << "Final Score: " << students[i].getFinalScore() << endl;
        students[i].returnLetterGrade();
    }
    for (i = 0; i < 10; i++)
    {
        students[i].output();
    }
    return 0;
}

