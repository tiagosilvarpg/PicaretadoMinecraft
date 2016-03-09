#include "Item.h"
#include <iostream>
#inlcude <string>
using std::ostream;
Item::Item()
{
    tipoDoItem="tipo";
}
Item::Item(const string text)
{
    tipoDoItem=text;
}
ostream & operator<<(ostream & output,const Item & rValue)
{
    output<<tipoDoItem;
    return output;
}
Item::~Item()
{
}

