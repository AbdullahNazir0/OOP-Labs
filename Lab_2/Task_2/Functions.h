#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
using namespace std;

void readData(ifstream& fin, int* arr, int& s);
int* regrow(int* arr, int& s, int val);
void copy(int* newArr, int* oldArr, int s);
int sum(int* arr, int s);
double avg(int* arr, int s);
void sortArr(int* arr, int s);
void displayArr(int* arr, int s);

#endif