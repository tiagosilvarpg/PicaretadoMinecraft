#ifndef PICARETA_H
#define PICARETA_H
#include <string>
using namespace std;
class Bloco
{
    private:
    string material;
    int resistencia;
    
    public:
    bool damage(float);
    void imprimir();
    int initResistencia(string);
    string getMaterial();
    float  getResistencia();
    Bloco(string);
    Bloco();
};
//picareta

class Picareta
{
    private:
    string material;
    int durabilidade;
    float forca;
    
    public:
    Picareta();
    Picareta(string);
    int initDurabilidade(string);
    bool atacar(Bloco);
    bool concertar(Bloco);
    int mostrarDurabilidade();
    ~Picareta();

};
//bloco

//mapa
class Mapa
{
    private:
    Bloco *grid;
    
    public:    
    Mapa();
    Mapa(string);
    void refresh();
    ~Mapa();

};
#endif // PICARETA_H
