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
