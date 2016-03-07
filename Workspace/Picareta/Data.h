#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int=1,int=1,int=1800);
    void  print()const;
    ~Data();
private:
    int month,day,year;    
    int checkDay(int) const;

};
#endif // DATA_H
