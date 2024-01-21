#include "Quiz.h"

#include <iostream>
#include <fstream>
using namespace std;

void readQuestions(ifstream& fin, string& q1, string& q2, string& q3, string& q4, string& q5)
{
    getline(fin, q1);
    getline(fin, q2);
    getline(fin, q3);
    getline(fin, q4);
    getline(fin, q5);
}

void presentingQuestions(string& q1, string& q2, string& q3, string& q4, string& q5, string& a1, string& a2, string& a3, string& a4, string& a5)
{
    cout << q1;
    cin >> a1;
    cout << q2;
    cin >> a2;
    cout << q3;
    cin >> a3;
    cout << q4;
    cin >> a4;
    cout << q5;
    cin >> a5;
}

void readAnswers(ifstream& fin, string& sample_a1, string& sample_a2, string& sample_a3, string& sample_a4, string& sample_a5)
{
    getline(fin, sample_a1);
    getline(fin, sample_a2);
    getline(fin, sample_a3);
    getline(fin, sample_a4);
    getline(fin, sample_a5);
}

int checkingAnswers(string& a1, string& a2, string& a3, string& a4, string& a5, string& sample_a1, string& sample_a2, string& sample_a3, string& sample_a4, string& sample_a5)
{
    int marks = 0;
    if(a1 == sample_a1)
    {
        marks++;
    }
    if(a2 == sample_a2)
    {
        marks++;
    }
    if(a3 == sample_a3)
    {
        marks++;
    }
    if(a4 == sample_a4)
    {
        marks++;
    }
    if(a5 == sample_a5)
    {
        marks++;
    }
    return marks;
}
