#include "testes.h"

//Imóvel
void TUImovel::setUp(){
    entidade = new Imovel();
    estado = SUCESSO;
}

void TUImovel::tearDown(){
    delete entidade;
}

void TUImovel::testarCenarioCodigo(){
    Codigo valor;
    valor.setCodigo(VALOR_VALIDO_CODIGO);
    entidade->setCodigo(valor);
    if (entidade-.getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
}

void TUImovel::testarCenarioClasse(){
    Classe valor;
    valor.setClasse(VALOR_VALIDO_CLASSE);
    entidade->setClasse(valor);
    if (entidade-.getClasse().getClasse() != VALOR_VALIDO_CLASSE)
        estado = FALHA;
}

void TUImovel::testarCenarioDescricao(){
    Descricao valor;
    valor.setDescricao(VALOR_VALIDO_DESCRICAO);
    entidade->setDescricao(valor);
    if (entidade-.getDescricao().getDescricao() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
}

void TUImovel::testarCenarioEndereco(){
    Endereco valor;
    valor.setEndereco(VALOR_VALIDO_ENDERECO);
    entidade->setEndereco(valor);
    if (entidade-.getEndereco().getEndereco() != VALOR_VALIDO_ENDERECO)
        estado = FALHA;
}

void TUImovel::testarCenarioDataInicial(){
    Data valor;
    valor.setDataInicial(VALOR_VALIDO_DATAINICIAL);
    entidade->setDataInicial(valor);
    if (entidade-.getDataInicial().getDataInicial() != VALOR_VALIDO_DATAINICIAL)
        estado = FALHA;
}

void TUImovel::testarCenarioDataFinal(){
    Data valor;
    valor.setDataFinal(VALOR_VALIDO_DATAFINAL);
    entidade->setDataFinal(valor);
    if (entidade-.getDataFinal().getDataFinal() != VALOR_VALIDO_DATAFINAL)
        estado = FALHA;
}

void TUImovel::testarCenarioNumero(){
    Numero valor;
    valor.setHospedes(VALOR_VALIDO_NUMERO);
    entidade->setHospedes(valor);
    if (entidade-.getHospedes().getHospedes() != VALOR_VALIDO_NUMERO)
        estado = FALHA;
}

void TUImovel::testarCenarioMoeda(){
    Moeda valor;
    valor.setValor(VALOR_VALIDO_MOEDA);
    entidade->setValor(valor);
    if (entidade-.getValor().getValor() != VALOR_VALIDO_MOEDA)
        estado = FALHA;
}

int TUImovel::run(){
  setUp();
  testarCenarioCodigo();
  testarCenarioClasse();
  testarCenarioDescricao();
  testarCenarioEndereco();
  testarCenarioDataInicial();
  testarCenarioDataFinal();
  testarCenarioNumero();
  testarCenarioMoeda();
  tearDown();
  return estado;
}


//PROPOSTA
void TUProposta::setUp(){
    entidade = new Proposta();
    estado = SUCESSO;
}

void TUProposta::tearDown(){
    delete entidade;
}

void TUProposta::testarCenarioCodigo(){
    Codigo valor;
    valor.setCodigo(VALOR_VALIDO_CODIGO);
    entidade->setCodigo(valor);
    if (entidade-.getCodigo().getCodigo() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
}

void TUProposta::testarCenarioDataInicial(){
    Data valor;
    valor.setDataInicial(VALOR_VALIDO_DATAINICIAL);
    entidade->setDataInicial(valor);
    if (entidade-.getDataInicial().getDataInicial() != VALOR_VALIDO_DATAINICIAL)
        estado = FALHA;
}

void TUProposta::testarCenarioDataFinal(){
    Data valor;
    valor.setDataFinal(VALOR_VALIDO_DATAFINAL);
    entidade->setDataFinal(valor);
    if (entidade-.getDataFinal().getDataFinal() != VALOR_VALIDO_DATAFINAL)
        estado = FALHA;
}

void TUProposta::testarCenarioNumero(){
    Numero valor;
    valor.setHospedes(VALOR_VALIDO_NUMERO);
    entidade->setHospedes(valor);
    if (entidade-.getHospedes().getHospedes() != VALOR_VALIDO_NUMERO)
        estado = FALHA;
}

void TUProposta::testarCenarioMoeda(){
    Moeda valor;
    valor.setValor(VALOR_VALIDO_MOEDA);
    entidade->setValor(valor);
    if (entidade-.getValor().getValor() != VALOR_VALIDO_MOEDA)
        estado = FALHA;
}

int TUProposta::run(){
  setUp();
  testarCenarioCodigo();
  testarCenarioDataInicial();
  testarCenarioDataFinal();
  testarCenarioNumero();
  testarCenarioMoeda();
  tearDown();
  return estado;
}

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
    if (entidade-.getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;
}

void TUUsuario::testarCenarioEmail(){
    Email valor;
    valor.setEmail(VALOR_VALIDO_EMAIL);
    entidade->setEmail(valor);
    if (entidade-.getEmail().getEmail() != VALOR_VALIDO_EMAIL)
        estado = FALHA;
}

void TUUsuario::testarCenarioSenha(){
    Senha valor;
    valor.setSenha(VALOR_VALIDO_SENHA);
    entidade->setSenha(valor);
    if (entidade-.getSenha().getSenha() != VALOR_VALIDO_SENHA)
        estado = FALHA;
}

void TUUsuario::testarCenarioTelefone(){
    Telefone valor;
    valor.setTelefone(VALOR_VALIDO_TELEFONE);
    entidade->setTelefone(valor);
    if (entidade-.getTelefone().getTelefone() != VALOR_VALIDO_TELEFONE)
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
