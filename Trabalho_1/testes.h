#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

class TUCodigoImovel{
    private:
        const static int VALOR_VALIDO   = "11111";
        const static int VALOR_INVALIDO = "00000";
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
