#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

//Imóvel
class TUCodigoImovel{
    private:
        const static int VALOR_VALIDO   = 11111;
        const static int VALOR_INVALIDO = 00000;
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
        const static int VALOR_VALIDO   = "CASINHA.";
        const static int VALOR_INVALIDO = "CASA";
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
        const static int VALOR_VALIDO   = "ASB 98";
        const static int VALOR_INVALIDO = "OI";
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
        const static int VALOR_VALIDO   = 050521;
        const static int VALOR_INVALIDO = 010119;
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
        const static int VALOR_VALIDO   = 050522;
        const static int VALOR_INVALIDO = 010100;
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
        NumeroImovel *numeroImovel;
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

class TUMoedaImovel{
    private:
        const static int VALOR_VALIDO   = 514.25;
        const static int VALOR_INVALIDO = -23.00;
        MoedaImovel *moedaImovel;
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

//Proposta
class TUCodigoProposta{
    private:
        const static int VALOR_VALIDO   = 25254;
        const static int VALOR_INVALIDO = 00000;
        CodigoProposta *codigoProposta;
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

class TUDataInicialProposta{
    private:
        const static int VALOR_VALIDO   = 020521;
        const static int VALOR_INVALIDO = 010119;
        DataInicialProposta *dataInicialProposta;
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

class TUDataFinalProposta{
    private:
        const static int VALOR_VALIDO   = 020921;
        const static int VALOR_INVALIDO = 010100;
        DataFinalProposta *dataFinalProposta;
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

class TUNumeroProposta{
    private:
        const static int VALOR_VALIDO   = 6;
        const static int VALOR_INVALIDO = 21;
        NumeroProposta *numeroProposta;
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

class TUMoedaProposta{
    private:
        const static int VALOR_VALIDO   = 50.00;
        const static int VALOR_INVALIDO = -23.00;
        MoedaProposta *moedaProposta;
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

//Usuário
class TUNome{
    private:
        const static int VALOR_VALIDO   = "Manolo";
        const static int VALOR_INVALIDO = "OI";
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
        const static int VALOR_VALIDO   = "manolo@email";
        const static int VALOR_INVALIDO = "..";
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
        const static int VALOR_VALIDO   = "AAaa98";
        const static int VALOR_INVALIDO = "aa";
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
        const static int VALOR_VALIDO   = 111111111111;
        const static int VALOR_INVALIDO = 88888;
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
