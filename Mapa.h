#ifndef MAPA_H
#define MAPA_H
#include "Data.h"
#include <string>
#include "Bloco.h"
using namespace std;
class Mapa
{
    private:
    Bloco **grid;
    int playerX,playerY;
    static int size;
    Data creationTime;
    string nome;
    
    public:    
    Mapa(const Data &);
    Mapa(const string &,const Data &);
    static void changeMapSize(int);
    int getPlayerX();
    int getPlayerY();
    void refresh();
    Bloco& getBloco(char);
    void movePlayer(char);
    ~Mapa();
};
#endif
