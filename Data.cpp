#include "Data.h"

Data::Data(int day,int month,int year)
{
    if (month>0 &&month<13) 
        this->month=month;
    else
        this->month=1;
    this->year=year;
    
    day=checkDay(day);
}
int Data::checkDay(int dia)const
{
    static const int diasPorMes[ 13 ] ={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (dia>0 && dia<diasPorMes[month])
    return dia;
    else return 1;    
}
Data::~Data()
{
}

