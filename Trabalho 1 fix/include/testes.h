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

//Imóvel
class TUCodigoImovel{
    private:
        string VALOR_VALIDO   = "11111";
        string VALOR_INVALIDO = "00000";
        CodigoImovel *codigoImovel;
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

class TUClasse{
    private:
        const static int VALOR_VALIDO   = 2;
        const static int VALOR_INVALIDO = 4;
        Classe *classe;
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

class TUDescricao{
    private:
        string VALOR_VALIDO   = "CASINHA.";
        string VALOR_INVALIDO = "CASA";
        Descricao *descricao;
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

class TUEndereco{
    private:
        string VALOR_VALIDO   = "ASB 98";
        string VALOR_INVALIDO = "OI";
        Endereco *endereco;
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

class TUDataInicialImovel{
    private:
        int VALOR_VALIDO   = 200628;
        int VALOR_INVALIDO = 999999;
        DataInicialImovel *dataInicialImovel;
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

class TUDataFinalImovel{
    private:
        int VALOR_VALIDO   = 200629;
        int VALOR_INVALIDO = 999999;
        DataFinalImovel *dataFinalImovel;
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

class TUNumeroImovel{
    private:
        const static int VALOR_VALIDO   = 5;
        const static int VALOR_INVALIDO = 21;
        NumeroImovel *hospedesImovel;
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
