#ifndef CALENDAR_H
#define CALENDAR_H

#include <iostream>

class Calendar {
private:
    int year;
    int month;
    int day;

public:
    Calendar();
    Calendar(int d, int m, int y);
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay()const;
    int getMonth()const;
    int getYear()const;
    void printDate()const;
    void advanceDays(int numDays);
    bool isLeapYear();
    bool isValidDate(int day, int mon, int year);

};

#endif