#include <iostream>
#include "Picareta.h"
#include <string>

int main(int argc, char **argv)
{
	string str;
    
	
    
    cout<<"insira uma cadeia de blocos (ouro,pedra,ferro,diamante)"<<endl;
    cin>>str;
    Mapa  mundo(str);
    cout<<"insira uma material para a picareta (pedra,diamante,ouro,ferro,madeira)"<<endl;
    cin>>str;
    Picareta ferramenta(str);
    ferramenta.mostrarDurabilidade();
    mundo.refresh();
    
    system("pause");    
	return 0;
}

