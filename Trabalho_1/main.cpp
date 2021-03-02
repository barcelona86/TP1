#include <iostream>

#include "dominios.h"
#include "testes.h"
#include "entidades.h"

using namespace std;

int main()
{
    TUImovel testeImovel;
    switch(testeImovel.run()){
        case TUImovel::SUCESSO : cout << "SUCESSO - IMÓVEL" << endl;
            break;
        case TUImovel::FALHA : cout << "FALHA - IMÓVEL" << endl;
            break;
    }

    TUProposta testeProposta;
    switch(testeProposta.run()){
        case TUProposta::SUCESSO : cout << "SUCESSO - PROPOSTA" << endl;
            break;
        case TUProposta::FALHA : cout << "FALHA - PROPOSTA" << endl;
            break;
    }

    TUUsuario testeUsuario;
    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO : cout << "SUCESSO - USUARIO" << endl;
            break;
        case TUUsuario::FALHA : cout << "FALHA - USUARIO" << endl;
            break;
    }

        case TUValorMinimo::SUCESSO: cout << "SUCESSO ValorMinimoo\n";
            break;
        case TUValorMinimo::FALHA  : cout << "FALHA para classe ValorMinimo \n";
            break;
    }

    system("pause");
    return 0;
}
