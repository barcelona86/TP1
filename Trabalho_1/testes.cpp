#include "testes.h"

void TUCodigoImovel::setUp(){
    codigoImovel = new CodigoImovel();
    estado = SUCESSO;
}
void TUCodigoImovel::tearDown(){
    delete codigoImovel;
}
void TUCodigoImovel::testarCenarioSucesso(){
    try{
        codigoImovel->setCodigo(VALOR_VALIDO);
        if (codigoImovel->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigoImovel::testarCenarioFalha(){
    try{
        codigoImovel->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (cep->getCep() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCep::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
