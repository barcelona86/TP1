#include "testesEntidades.h"

using namespace std;

//USUÁRIO
void TUUsuario::setUp(){
    entidade = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete entidade;
}

void TUUsuario::testarCenarioNome(){
    Nome valor;
    valor.setNome(VALOR_VALIDO_NOME);
    entidade->setNome(valor);
    if (entidade->getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;
}

void TUUsuario::testarCenarioEmail(){
    Email valor;
    valor.setEmail(VALOR_VALIDO_EMAIL);
    entidade->setEmail(valor);
    if (entidade->getEmail().getEmail() != VALOR_VALIDO_EMAIL)
        estado = FALHA;
}

void TUUsuario::testarCenarioSenha(){
    Senha valor;
    valor.setSenha(VALOR_VALIDO_SENHA);
    entidade->setSenha(valor);
    if (entidade->getSenha().getSenha() != VALOR_VALIDO_SENHA)
        estado = FALHA;
}

void TUUsuario::testarCenarioTelefone(){
    Telefone valor;
    valor.setTelefone(VALOR_VALIDO_TELEFONE);
    entidade->setTelefone(valor);
    if (entidade->getTelefone().getTelefone() != VALOR_VALIDO_TELEFONE)
        estado = FALHA;
}

int TUUsuario::run(){
  setUp();
  testarCenarioNome();
  testarCenarioEmail();
  testarCenarioSenha();
  testarCenarioTelefone();
  tearDown();
  return estado;
}

//Imóvel
void TUImovel::setUp(){
    entidade = new Imovel();
    estado = SUCESSO;
}

void TUImovel::tearDown(){
    delete entidade;
}

void TUImovel::testarCenarioCodigoImovel(){
    CodigoImovel valor;
    valor.setCodigoImovel(VALOR_VALIDO_CODIGOIMOVEL);
    entidade->setCodigoImovel(valor);
    if (entidade->getCodigoImovel().getCodigoImovel() != VALOR_VALIDO_CODIGOIMOVEL)
        estado = FALHA;
}

void TUImovel::testarCenarioClasse(){
    Classe valor;
    valor.setClasse(VALOR_VALIDO_CLASSE);
    entidade->setClasse(valor);
    if (entidade->getClasse().getClasse() != VALOR_VALIDO_CLASSE)
        estado = FALHA;
}

void TUImovel::testarCenarioDescricao(){
    Descricao valor;
    valor.setDescricao(VALOR_VALIDO_DESCRICAO);
    entidade->setDescricao(valor);
    if (entidade->getDescricao().getDescricao() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
}

void TUImovel::testarCenarioEndereco(){
    Endereco valor;
    valor.setEndereco(VALOR_VALIDO_ENDERECO);
    entidade->setEndereco(valor);
    if (entidade->getEndereco().getEndereco() != VALOR_VALIDO_ENDERECO)
        estado = FALHA;
}

void TUImovel::testarCenarioDataInicialImovel(){
    DataInicialImovel valor;
    valor.setDataInicialImovel(VALOR_VALIDO_DATAINICIALIMOVEL);
    entidade->setDataInicialImovel(valor);
    if (entidade->getDataInicialImovel().getDataInicialImovel() != VALOR_VALIDO_DATAINICIALIMOVEL)
        estado = FALHA;
}

void TUImovel::testarCenarioDataFinalImovel(){
    DataFinalImovel valor;
    valor.setDataFinalImovel(VALOR_VALIDO_DATAFINALIMOVEL);
    entidade->setDataFinalImovel(valor);
    if (entidade->getDataFinalImovel().getDataFinalImovel() != VALOR_VALIDO_DATAFINALIMOVEL)
        estado = FALHA;
}

int TUImovel::run(){
  setUp();
  testarCenarioCodigoImovel();
  testarCenarioClasse();
  testarCenarioDescricao();
  testarCenarioEndereco();
  testarCenarioDataInicialImovel();
  testarCenarioDataFinalImovel();
  tearDown();
  return estado;
}
