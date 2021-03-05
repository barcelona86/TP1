#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;
//Usuário
class TUNome{
    private:
        string VALOR_VALIDO   = "Manolo";
        string VALOR_INVALIDO = "OI";
        Nome *nome;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO =  0;
        const static int FALHA   = -1;
        int run();
};

class TUEmail{
    private:
        string VALOR_VALIDO   = "manolo@email";
        string VALOR_INVALIDO = "KKKKKKKKKKKKKKKKKKK@KKKKKKKKKKKKKKKKKKKKKK";
        Email *email;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO =  0;
        const static int FALHA   = -1;
        int run();
};

class TUSenha{
    private:
        string VALOR_VALIDO   = "AAaa98";
        string VALOR_INVALIDO = "aa";
        Senha *senha;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO =  0;
        const static int FALHA   = -1;
        int run();
};

class TUTelefone{
    private:
        string VALOR_VALIDO   = "111111111111";
        string VALOR_INVALIDO = "88888";
        Telefone *telefone;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO =  0;
        const static int FALHA   = -1;
        int run();
};

#endif // TESTES_H_INCLUDED
