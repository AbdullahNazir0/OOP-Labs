#include "Calendar.h"

Calendar::Calendar()
{
    day = 1;
    month = 1;
    year = 1900;
}
Calendar::Calendar(int d, int m, int y)
{
    if(isValidDate(d, m, y))
    {
        day = d;
        month = m;
        year = y;
    }
    else 
    {
        std::cout << "Invalid input. Date set to default(01-01-1900)." << std::endl;
    }
}
void Calendar::setDay(int d)
{
    day = d;
}
void Calendar::setMonth(int m)
{
    month = m;
}
void Calendar::setYear(int y)
{
    year = y;
}
int Calendar::getDay() const
{
    return day;
}
int Calendar::getMonth() const
{
    return month;
}
int Calendar::getYear() const
{
    return year;
}
void Calendar::printDate() const
{
    std::cout << "The date is " << day << "/" << month << "/" << year << std::endl;
}
void Calendar::advanceDays(int numDays)
{}
bool Calendar::isLeapYear()
{
    return (year % 4 == 0);
}
bool Calendar::isValidDate(int day, int mon, int year)
{
    if(month >= 1 && month <= 12)
    {
        if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day >= 1 && day <= 31))
        {
            return true;
        }
        else if((month == 2 && (day >= 1 && day <= 28)) && !isLeapYear())
        {
            return true;
        }
        else if((month == 2 && (day >= 1 && day <= 29)) && isLeapYear())
        {
            return true;
        }
        else if((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30))
        {
            return true;
        }
        else{
            return false;
        }
    }
    else 
    {
        return false;
    }
}