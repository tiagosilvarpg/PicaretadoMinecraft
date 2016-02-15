#ifndef DATA_H
#define DATA_H

class data
{
public:
    data(int=1,int=1,int=1800);
    void  print()const;
    ~data();
private:
    int month,day,year;    
    int checkDay(int) const;

};
#endif // DATA_H
