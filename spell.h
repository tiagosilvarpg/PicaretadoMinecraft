#ifndef SPELL_H
#define SPELL_H
#include <string.h>
class Spell
{
public:
    Spell();
    ~Spell();
private :
    string descricao;
    string nome;
    int nivel;
    int duracao;
};

#endif // SPELL_H
