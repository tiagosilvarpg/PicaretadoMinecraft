#ifndef MAPA_H
#define MAPA_H
#include <string>
#include "Bloco.h"
using namespace std;
class Mapa
{
    private:
    Bloco **grid;
    int playerX,playerY;
    static int size;
    
    public:    
    Mapa();
    Mapa(const string &);
    static void changeMapSize(int);
    int getPlayerX();
    int getPlayerY();
    void refresh();
    Bloco& getBloco(char);
    void movePlayer(char);
    ~Mapa();
};
#endif
