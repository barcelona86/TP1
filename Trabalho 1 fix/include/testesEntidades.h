#ifndef TESTESENTIDADES_H_INCLUDED
#define TESTESENTIDADES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;
//Usuário
class TUUsuario {
    private:
        string VALOR_VALIDO_NOME = "Manolo";
        string VALOR_VALIDO_EMAIL = "manolo@email";
        string VALOR_VALIDO_SENHA = "AAaa98";
        string VALOR_VALIDO_TELEFONE = "111111111111";
        Usuario *entidade;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioNome();
        void testarCenarioEmail();
        void testarCenarioSenha();
        void testarCenarioTelefone();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif // TESTESENTIDADES_H_INCLUDED
