#ifndef PICARETA_H
#define PICARETA_H
#include <string>
class Picareta
{
    private:
    char material;
    int durabilidade;
    float forca;
    
    public:
    Picareta();
    atacar();
    concertar();
    void mostrarDurabilidade();
    ~Picareta();

};

#endif // PICARETA_H
