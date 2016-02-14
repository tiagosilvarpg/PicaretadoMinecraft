#ifndef BLOCO_H
#define BLOCO_H
#include <string>
using namespace std;
class Bloco
{
    private:
    string material;
    int resistencia;
    int cor;
    
    public:
    bool damage(int);
    void imprimir();
    void init(const string &);
    bool isAir();
    Bloco(string);
    Bloco();
};
#endif
