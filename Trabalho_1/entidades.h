#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"
#include <string>

using namespace std;

//Criação do domínio
class Imovel{
    private:
        //Domínio       //Nome domínio
        Codigo          codigo;
        Classe          classe;
        Descricao       descricao;
        Endereco        endereco;
        Data            dataInicial;
        Data            dataFinal;
        Numero          hospedes;
        Moeda           valor;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setClasse(const Classe&);
        Classe getClasse() const;

        void setDescricao(const Descricao&);
        descricao getDescricao() const;

        void setEndereco(const Endereco&);
        Endereco getEndereco() const;

        void setDataInicial(const Data&);
        Data getDataInicial() const;

        void setDataFinal(const Data&);
        Data getDataFinal() const;

        void setHospedes(const Numero&);
        Numero getHospedes() const;

        void setValor(const Moeda&);
        Moeda getValor() const;
}

inline void Imovel::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Imovel::getCodigo() const{
    return codigo;
}

inline void Imovel::setClasse(const Classe &classe){
    this->classe = classe;
}

inline Classe Imovel::getClasse() const{
    return classe;
}

inline void Imovel::setDescricao(const Descricao &descricao){
    this->descricao = descricao;
}

inline Descricao Imovel::getDescricao() const{
    return descricao;
}

inline void Imovel::setEndereco(const Endereco &endereco){
    this->endereco = endereco;
}

inline Endereco Imovel::getEndereco() const{
    return endereco;
}

inline void Imovel::setDataInicial(const Data &dataInicial){
    this->dataInicial = dataInicial;
}

inline Data Imovel::getDataInicial() const{
    return dataInicial;
}

inline void Imovel::setDataFinal(const Data &dataFinal){
    this->dataFinal = dataFinal;
}

inline Data Imovel::getDataFinal() const{
    return dataFinal;
}

inline void Imovel::setHospedes(const Numero &hospedes){
    this->hospedes = hospedes;
}

inline Numero Imovel::getHospedes() const{
    return hospedes;
}

inline void Imovel::setValor(const Moeda &valor){
    this->valor = valor;
}

inline Moeda Imovel::getValor() const{
    return valor;
}

class Proposta{
    private:
        Codigo  codigo;
        Data    dataInicial;
        Data    dataFinal;
        Numero  hospedes;
        Moeda   valor;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setDataInicial(const Data&);
        Data getDataInicial() const;

        void setDataFinal(const Data&);
        Data getDataFinal() const;

        void setHospedes(const Numero&);
        Numero getHospedes() const;

        void setValor(const Moeda&);
        Moeda getValor() const;
};

inline void Proposta::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Proposta::getCodigo() const{
    return codigo;
}

inline void Proposta::setDataInicial(const Data &dataInicial){
    this->dataInicial = dataInicial;
}

inline Data Proposta::getDataInicial() const{
    return dataInicial;
}

inline void Proposta::setDataFinal(const Data &dataFinal){
    this->dataFinal = dataFinal;
}

inline Data Proposta::getDataFinal() const{
    return dataFinal;
}

inline void Proposta::setHospedes(const Numero &hospedes){
    this->hospedes = hospedes;
}

inline Numero Proposta::getHospedes() const{
    return hospedes;
}

inline void Proposta::setValor(const Moeda &valor){
    this->valor = valor;
}

inline Moeda Proposta::getValor() const{
    return valor;
}

class Usuario{
    private:
        Nome     nome;
        Email    email;
        Senha    senha;
        Telefone telefone;
    public:
        void setNome(const Nome&);
        Nome getNome() const;

        void setEmail(const Email&);
        Email getEmail() const;

        void setSenha(const Senha&);
        Senha getSenha() const;

        void setTelefone(const Telefone&);
        Telefone getTelefone() const;
};

inline void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

inline Nome Usuario::getNome() const{
    return nome;
}

inline void Usuario::setEmail(const Email &email){
    this->email = email;
}

inline Email Usuario::getEmail() const{
    return email;
}

inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

inline Senha Usuario::getSenha() const{
    return senha;
}

inline void Usuario::setTelefone(const Telefone &telefone){
    this->telefone = telefone;
}

inline Telefone Usuario::getTelefone() const{
    return telefone;
}
