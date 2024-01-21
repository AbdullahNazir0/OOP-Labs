#ifndef QUIZ_H
#define QUIZ_H

#include<iostream>
#include<fstream>
using namespace std;

void readQuestions(ifstream& fin, string& q1, string& q2, string& q3, string& q4, string& q5);
void presentingQuestions(string& q1, string& q2, string& q3, string& q4, string& q5, string& a1, string& a2, string& a3, string& a4, string& a5);
void readAnswers(ifstream& fin, string& sample_a1, string& sample_a2, string& sample_a3, string& sample_a4, string& sample_a5);
int checkingAnswers(string& a1, string& a2, string& a3, string& a4, string& a5, string& sample_a1, string& sample_a2, string& sample_a3, string& sample_a4, string& sample_a5);

#endif