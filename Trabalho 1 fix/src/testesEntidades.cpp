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
