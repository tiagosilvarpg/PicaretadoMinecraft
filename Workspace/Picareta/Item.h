#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item
{
    friend ostream & operator<<(ostream & output,const Item & rValue);
public:
    Item();
    Item(const string);
    
    ~Item();
private:
    string tipoDoItem;

};

#endif // ITEM_H
