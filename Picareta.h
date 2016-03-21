#ifndef PICARETA_H
#define PICARETA_H
#include <string>
#include "Bloco.h"
#include "Ferramenta.h"
using std::string;

class Picareta : public Ferramenta
{
    friend ostream & operator<<(ostream & ,const Picareta &);
public:
    Picareta();
    Picareta(const Picareta &);
    ~Picareta();
    //novo
    static void increaseTotalMinerado();
    bool usar( Bloco & target );
    bool consertar( const Ferramenta &);
    //sobrecarga
    bool operator==(const Picareta &);
    bool operator!=(const Picareta & rValue);
    const Picareta & operator=(const Picareta &);

private:
    static int totalMinerado;
protected:
    int forca;
    
};
#endif // PICARETA_H
