#include "testes.h"
//Código Imóvel
void TUCodigoImovel::setUp(){
    codigoImovel = new CodigoImovel();
    estado = SUCESSO;
}
void TUCodigoImovel::tearDown(){
    delete codigoImovel;
}
void TUCodigoImovel::testarCenarioSucesso(){
    try{
        codigoImovel->setCodigoImovel(VALOR_VALIDO);
        if (codigoImovel->getCodigoImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigoImovel::testarCenarioFalha(){
    try{
        codigoImovel->setCodigoImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigoImovel->getCodigoImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCodigoImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Classe
void TUClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}
void TUClasse::tearDown(){
    delete classe;
}
void TUClasse::testarCenarioSucesso(){
    try{
        classe->setClasse(VALOR_VALIDO);
        if (classe->getClasse() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUClasse::testarCenarioFalha(){
    try{
        classe->setClasse(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (classe->getClasse() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Descricao
void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
}
void TUDescricao::tearDown(){
    delete descricao;
}
void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDescricao(VALOR_VALIDO);
        if (descricao->getDescricao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setDescricao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (descricao->getDescricao() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Endereco
void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}
void TUEndereco::tearDown(){
    delete endereco;
}
void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (endereco->getEndereco() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Data Inicial Imóvel
void TUDataInicialImovel::setUp(){
    dataInicialImovel = new DataInicialImovel();
    estado = SUCESSO;
}
void TUDataInicialImovel::tearDown(){
    delete dataInicialImovel;
}
void TUDataInicialImovel::testarCenarioSucesso(){
    try{
        dataInicialImovel->setDataInicialImovel(VALOR_VALIDO);
        if (dataInicialImovel->getDataInicialImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDataInicialImovel::testarCenarioFalha(){
    try{
        dataInicialImovel->setDataInicialImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (dataInicialImovel->getDataInicialImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDataInicialImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Data Final Imóvel
void TUDataFinalImovel::setUp(){
    dataFinalImovel = new DataFinalImovel();
    estado = SUCESSO;
}
void TUDataFinalImovel::tearDown(){
    delete dataFinalImovel;
}
void TUDataFinalImovel::testarCenarioSucesso(){
    try{
        dataFinalImovel->setDataFinalImovel(VALOR_VALIDO);
        if (dataFinalImovel->getDataFinalImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDataFinalImovel::testarCenarioFalha(){
    try{
        dataFinalImovel->setDataFinalImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (dataFinalImovel->getDataFinalImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDataFinalImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Número Imóvel
void TUNumeroImovel::setUp(){
    numeroImovel = new NumeroImovel();
    estado = SUCESSO;
}
void TUNumeroImovel::tearDown(){
    delete numeroImovel;
}
void TUNumeroImovel::testarCenarioSucesso(){
    try{
        numeroImovel->setNumeroImovel(VALOR_VALIDO);
        if (numeroImovel->getNumeroImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUNumeroImovel::testarCenarioFalha(){
    try{
        numeroImovel->setNumeroImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (numeroImovel->getNumeroImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUNumeroImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Moeda Imóvel
void TUMoedaImovel::setUp(){
    moedaImovel = new MoedaImovel();
    estado = SUCESSO;
}
void TUMoedaImovel::tearDown(){
    delete moedaImovel;
}
void TUMoedaImovel::testarCenarioSucesso(){
    try{
        moedaImovel->setMoedaImovel(VALOR_VALIDO);
        if (moedaImovel->getMoedaImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUMoedaImovel::testarCenarioFalha(){
    try{
        moedaImovel->setMoedaImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (moedaImovel->getMoedaImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUMoedaImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Código Proposta
void TUCodigoProposta::setUp(){
    codigoProposta = new CodigoProposta();
    estado = SUCESSO;
}
void TUCodigoProposta::tearDown(){
    delete codigoProposta;
}
void TUCodigoProposta::testarCenarioSucesso(){
    try{
        codigoProposta->setCodigoProposta(VALOR_VALIDO);
        if (codigoProposta->getCodigoProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigoProposta::testarCenarioFalha(){
    try{
        codigoProposta->setCodigoProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigoProposta->getCodigoProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCodigoProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Data Inicial Proposta
void TUDataInicialProposta::setUp(){
    dataInicialProposta = new DataInicialProposta();
    estado = SUCESSO;
}
void TUDataInicialProposta::tearDown(){
    delete dataInicialProposta;
}
void TUDataInicialProposta::testarCenarioSucesso(){
    try{
        dataInicialProposta->setDataInicialProposta(VALOR_VALIDO);
        if (dataInicialProposta->getDataInicialProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDataInicialProposta::testarCenarioFalha(){
    try{
        dataInicialProposta->setDataInicialProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (dataInicialProposta->getDataInicialProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDataInicialProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Data Final Proposta
void TUDataFinalProposta::setUp(){
    dataFinalProposta = new DataFinalProposta();
    estado = SUCESSO;
}
void TUDataFinalProposta::tearDown(){
    delete dataFinalProposta;
}
void TUDataFinalProposta::testarCenarioSucesso(){
    try{
        dataFinalProposta->setDataFinalProposta(VALOR_VALIDO);
        if (dataFinalProposta->getDataFinalProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDataFinalProposta::testarCenarioFalha(){
    try{
        dataFinalProposta->setDataFinalProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (dataFinalProposta->getDataFinalProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDataFinalProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Número Proposta
void TUNumeroProposta::setUp(){
    numeroProposta = new numeroProposta();
    estado = SUCESSO;
}
void TUNumeroProposta::tearDown(){
    delete numeroProposta;
}
void TUNumeroProposta::testarCenarioSucesso(){
    try{
        numeroProposta->setNumeroProposta(VALOR_VALIDO);
        if (numeroProposta->getNumeroProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUNumeroProposta::testarCenarioFalha(){
    try{
        numeroProposta->setNumeroProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (numeroProposta->getNumeroProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUNumeroProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Moeda Proposta
void TUMoedaProposta::setUp(){
    moedaProposta = new MoedaProposta();
    estado = SUCESSO;
}
void TUMoedaProposta::tearDown(){
    delete moedaProposta;
}
void TUMoedaProposta::testarCenarioSucesso(){
    try{
        moedaProposta->setMoedaProposta(VALOR_VALIDO);
        if (moedaProposta->getMoedaProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUMoedaProposta::testarCenarioFalha(){
    try{
        moedaProposta->setMoedaProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (moedaProposta->getMoedaProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUMoedaProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

