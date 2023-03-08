#include "Date.h"
#include <string>
#include <sstream>
#include <iomanip>

void Date::setMonth(int m)
{   month = m;}
const int Date::getMonth()
{   return month;}

void Date::setDay(int d)
{   day = d;}
const int Date::getDay()
{   return day;}

void Date::setYear(int y)
{   year = y;}
const int Date::getYear()
{   return year;}

std::string Date::print()
{
    std::stringstream date;

    date << setw(10) << left << MONTHS[month-1] << setw(3) << left << day << setw(5) << year;

    return date.str();
}

bool Date::compare(const Date& d1, const Date& d2)
{
    return (d1.getYear() < d2.getYear()) || 
           ((d1.getYear() == d2.getYear()) && (d1.getMonth() < d2.getMonth())) || 
           ((d1.getYear() == d2.getYear()) && (d1.getMonth() == d2.getMonth()) && (d1.getDay() < d2.getDay()));
}