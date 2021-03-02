#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUImovel {
    private:
        const static int VALOR_VALIDO_CODIGO = 11111;
        const static int VALOR_VALIDO_CLASSE = 2;
        const static int VALOR_VALIDO_DESCRICAO = "CASINHA.";
        const static int VALOR_VALIDO_ENDERECO = "ASB 98";
        const static int VALOR_VALIDO_DATAINICIAL = "05-05-21";
        const static int VALOR_VALIDO_DATAFINAL = "05-05-22";
        const static int VALOR_VALIDO_NUMERO = 5;
        const static int VALOR_VALIDO_MOEDA = 514.25;
        Imovel *entidade;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioCodigo();
        void testarCenarioClasse();
        void testarCenarioDescricao();
        void testarCenarioEndereco();
        void testarCenarioDataInicial();
        void testarCenarioDataFinal();
        void testarCenarioNumero();
        void testarCenarioMoeda();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUProposta {
    private:
        const static int VALOR_VALIDO_CODIGO = 25254;
        const static int VALOR_VALIDO_DATAINICIAL = "02-05-21";
        const static int VALOR_VALIDO_DATAFINAL = "02-09-21";
        const static int VALOR_VALIDO_NUMERO = 6;
        const static int VALOR_VALIDO_MOEDA = 50.00;
        Proposta *entidade;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioCodigo();
        void testarCenarioDataInicial();
        void testarCenarioDataFinal();
        void testarCenarioNumero();
        void testarCenarioMoeda();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUUsuario {
    private:
        const static int VALOR_VALIDO_NOME = "Manolo";
        const static int VALOR_VALIDO_EMAIL = "manolo@email";
        const static int VALOR_VALIDO_SENHA = "AAaa98";
        const static int VALOR_VALIDO_TELEFONE = "(111)-111111111";
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
