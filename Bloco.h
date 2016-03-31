#ifndef BLOCO_H
#define BLOCO_H
#include <string>
using std::ostream;
using std::string;
class Bloco
{
    
    friend ostream & operator<<(ostream & ,const Bloco &);
    
   
    
public:
    Bloco(string);
    Bloco(const Bloco &);
    Bloco();
    
    bool damage(int);
    static void limparTudo();
    void init(const string &);
    bool isAir();
    int  getResistencia();
    
    //novo
    bool operator==(const Bloco &);
    const Bloco & operator=(const Bloco &);
    
    //
    
     private:
    string material;
    int resistencia;
    int cor;
};
#endif
