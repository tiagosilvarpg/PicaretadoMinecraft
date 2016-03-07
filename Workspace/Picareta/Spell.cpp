#include <string>
#include "Spell.h"
Spell::Spell()
{
    duracao=10;
    nivel=1;
    nome="resistente";
    descricao="tem uma chance de nao gastar quando usada";
}
Spell::Spell(const Spell & original)
{
    this->duracao=original.duracao;
    this->descricao=original.descricao;
    this->nivel=original.nivel;
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
Spell::~Spell()
{
}

