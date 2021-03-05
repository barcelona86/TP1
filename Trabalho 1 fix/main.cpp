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

    //Imóvel
    TUImovel testeImovel;
    switch(testeImovel.run()){
        case TUImovel::SUCESSO : cout << "SUCESSO - IMOVEL" << endl;
            break;
        case TUImovel::FALHA : cout << "FALHA - IMOVEL" << endl;
            break;
    }
    TUCodigoImovel testeCodigoImovel;
    switch(testeCodigoImovel.run()){
        case TUCodigoImovel::SUCESSO: cout << "SUCESSO - CODIGO IMOVEL \n";
            break;
        case TUCodigoImovel::FALHA  : cout << "FALHA - CODIGO IMOVEL \n";
            break;
    }
    TUClasse testeClasse;
    switch(testeClasse.run()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE \n";
            break;
        case TUClasse::FALHA  : cout << "FALHA - CLASSE \n";
            break;
    }
    TUDescricao testeDescricao;
    switch(testeDescricao.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO \n";
            break;
        case TUDescricao::FALHA  : cout << "FALHA - DESCRICAO \n";
            break;
    }

    TUEndereco testeEndereco;
    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO \n";
            break;
        case TUEndereco::FALHA  : cout << "FALHA - ENDERECO \n";
            break;
    }
    system("pause");
    return 0;
}
