#ifndef SPELL_H
#define SPELL_H

#include <string>
class Spell
{
private :

    int nivel;
    int duracao;
    std::string descricao;
    std::string nome;
public:
    Spell();
    Spell(const Spell &);
    std::string getNome();
    int getDuracao();
    bool usar();
    ~Spell();
    


};

#endif // SPELL_H
