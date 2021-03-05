#include "dominios.h"
#include <iostream>
//Usuário
void Nome::validar(string nome){
    int nomePermitido = nome.size();
    if (nomePermitido < LIMITEMINIMO || nomePermitido > LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
}

void Email::validar(string email){
    int emailPermitido = email.size();
    if (emailPermitido > LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Email::setEmail(string email){
    validar(email);
    this->email = email;
}

void Senha::validar(string senha){
    int senhaPermitido = senha.size();
    if (senhaPermitido != LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
}

void Telefone::validar(string telefone){
    int telefonePermitido = telefone.size();
    if (telefonePermitido != LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Telefone::setTelefone(string telefone){
    validar(telefone);
    this->telefone = telefone;
}

//Imóvel
void CodigoImovel::validar(string codigoImovel){
    int codigoImovelPermitido = codigoImovel.size();
    if (codigoImovelPermitido > LIMITEMAXIMO || codigoImovel==LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void CodigoImovel::setCodigoImovel(string codigoImovel){
    validar(codigoImovel);
    this->codigoImovel = codigoImovel;
}

void Classe::validar(int classe){
    if (classe > LIMITEMAXIMO || classe < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void Classe::setClasse(int classe){
    validar(classe);
    this->classe = classe;
}

void Descricao::validar(string descricao){
    int descricaoPermitido = descricao.size();
    if (descricaoPermitido > LIMITEMAXIMO || descricaoPermitido < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void Descricao::setDescricao(string descricao){
    validar(descricao);
    this->descricao = descricao;
}

void Endereco::validar(string endereco){
    int enderecoPermitido = endereco.size();
    if (enderecoPermitido > LIMITEMAXIMO || enderecoPermitido < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void Endereco::setEndereco(string endereco){
    validar(endereco);
    this->endereco = endereco;
}

void DataInicialImovel::validar(int dataInicialImovel){
    if (dataInicialImovel > LIMITEMAXIMO || dataInicialImovel < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void DataInicialImovel::setDataInicialImovel(int dataInicialImovel){
    validar(dataInicialImovel);
    this->dataInicialImovel = dataInicialImovel;
}

void DataFinalImovel::validar(int dataFinalImovel){
    if (dataFinalImovel > LIMITEMAXIMO || dataFinalImovel < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void DataFinalImovel::setDataFinalImovel(int dataFinalImovel){
    validar(dataFinalImovel);
    this->dataFinalImovel = dataFinalImovel;
}
