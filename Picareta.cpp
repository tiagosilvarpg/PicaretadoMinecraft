#include "Picareta.h"
#include <iostream>
#include <string>
using std::cout;

Picareta::Picareta()
{
    material='m';
    forca=1;
    durabilidade=100;
}

void Picareta::mostrarDurabilidade()
{
    cout<<"restam "<<durabilidade<<" usos";
}
Picareta::~Picareta()
{
}

