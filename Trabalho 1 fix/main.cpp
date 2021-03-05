#include <iostream>

#include "dominios.h"
#include "testes.h"
#include "entidades.h"
#include "testesEntidades.h"

using namespace std;

int main()
{
    //Usuário
    TUUsuario testeUsuario;
    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO : cout << "SUCESSO - USUARIO" << endl;
            break;
        case TUUsuario::FALHA : cout << "FALHA - USUARIO" << endl;
            break;
    }

    TUNome testeNome;
    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME \n";
            break;
        case TUNome::FALHA  : cout << "FALHA - NOME \n";
            break;
    }

    TUEmail testeEmail;
    switch(testeEmail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL \n";
            break;
        case TUEmail::FALHA  : cout << "FALHA - EMAIL \n";
            break;
    }

    TUSenha testeSenha;
    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA \n";
            break;
        case TUSenha::FALHA  : cout << "FALHA - SENHA \n";
            break;
    }

    TUTelefone testeTelefone;
    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE \n";
            break;
        case TUTelefone::FALHA  : cout << "FALHA - TELEFONE \n";
            break;
    }
    system("pause");
    return 0;
}
