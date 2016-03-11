#ifndef SPELL_H
#define SPELL_H
#include <string>
#include <iostream>
using std::ostream;
using std::string;
class Spell
{
    friend ostream & operator<<(ostream & output,const Spell & rValue);

public:
    Spell();
    Spell(const Spell &);
    string getNome();
    int getDuracao();
    bool usar();
    ~Spell();
private :
    int duracao;
    string descricao;
    string nome;

};

#endif // SPELL_H
