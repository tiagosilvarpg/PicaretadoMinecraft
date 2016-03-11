#include <string>
#include "Spell.h"
using std::cout;
using std::ostream;
Spell::Spell()
{
    duracao=10;
    nome="resistente";
    descricao="tem uma chance de nao gastar quando usada";
}
Spell::Spell(const Spell & original)
{
    this->duracao=original.duracao;
    this->nome=original.nome;
}
std::string Spell::getNome()
{
    return nome;
}
int Spell::getDuracao()
{
    return duracao;
}
bool Spell::usar()
{    if (duracao==0)
        return false;
     duracao-=1;
     return true;
}
ostream & operator<<(ostream & output,const Spell & feitico)
{
    output <<feitico.nome
           <<"("
           <<feitico.duracao
           <<")";
    return output;
}
Spell::~Spell()
{
}

