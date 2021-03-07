#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

using namespace std;
//Usuário
class Usuario{
    private:
        Nome        nome;
        Email       email;
        Senha       senha;
        Telefone    telefone;
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

//Imóvel
class Imovel{
    private:
        //Domínio               //Nome domínio
        CodigoImovel            codigoImovel;
        Classe                  classe;
        Descricao               descricao;
        Endereco                endereco;
        DataInicialImovel       dataInicialImovel;
        DataFinalImovel         dataFinalImovel;
        NumeroImovel            hospedesImovel;
        MoedaImovel             valorImovel;
    public:

        void setCodigoImovel(const CodigoImovel&);
        CodigoImovel getCodigoImovel() const;

        void setClasse(const Classe&);
        Classe getClasse() const;

        void setDescricao(const Descricao&);
        Descricao getDescricao() const;

        void setEndereco(const Endereco&);
        Endereco getEndereco() const;

        void setDataInicialImovel(const DataInicialImovel&);
        DataInicialImovel getDataInicialImovel() const;

        void setDataFinalImovel(const DataFinalImovel&);
        DataFinalImovel getDataFinalImovel() const;

        void setHospedesImovel(const NumeroImovel&);
        NumeroImovel getHospedesImovel() const;

        void setValorImovel(const MoedaImovel&);
        MoedaImovel getValorImovel() const;
};
inline void Imovel::setCodigoImovel(const CodigoImovel &codigoImovel){
    this->codigoImovel = codigoImovel;
}

inline CodigoImovel Imovel::getCodigoImovel() const{
    return codigoImovel;
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

inline void Imovel::setDataInicialImovel(const DataInicialImovel &dataInicialImovel){
    this->dataInicialImovel = dataInicialImovel;
}

inline DataInicialImovel Imovel::getDataInicialImovel() const{
    return dataInicialImovel;
}

inline void Imovel::setDataFinalImovel(const DataFinalImovel &dataFinalImovel){
    this->dataFinalImovel = dataFinalImovel;
}

inline DataFinalImovel Imovel::getDataFinalImovel() const{
    return dataFinalImovel;
}

inline void Imovel::setHospedesImovel(const NumeroImovel &hospedesImovel){
    this->hospedesImovel = hospedesImovel;
}

inline NumeroImovel Imovel::getHospedesImovel() const{
    return hospedesImovel;
}

inline void Imovel::setValorImovel(const MoedaImovel &valorImovel){
    this->valorImovel = valorImovel;
}

inline MoedaImovel Imovel::getValorImovel() const{
    return valorImovel;
}

class Proposta{
    private:
        CodigoProposta              codigoProposta;
        DataInicialProposta         dataInicialProposta;
        DataFinalProposta           dataFinalProposta;
        NumeroProposta              hospedesProposta;
        MoedaProposta               valorProposta;
    public:
        void setCodigoProposta(const CodigoProposta&);
        CodigoProposta getCodigoProposta() const;

        void setDataInicialProposta(const DataInicialProposta&);
        DataInicialProposta getDataInicialProposta() const;

        void setDataFinalProposta(const DataFinalProposta&);
        DataFinalProposta getDataFinalProposta() const;

        void setHospedesProposta(const NumeroProposta&);
        NumeroProposta getHospedesProposta() const;

        void setValorProposta(const MoedaProposta&);
        MoedaProposta getValorProposta() const;
};
inline void Proposta::setCodigoProposta(const CodigoProposta &codigoProposta){
    this->codigoProposta = codigoProposta;
}

inline CodigoProposta Proposta::getCodigoProposta() const{
    return codigoProposta;
}

inline void Proposta::setDataInicialProposta(const DataInicialProposta &dataInicialProposta){
    this->dataInicialProposta = dataInicialProposta;
}

inline DataInicialProposta Proposta::getDataInicialProposta() const{
    return dataInicialProposta;
}

inline void Proposta::setDataFinalProposta(const DataFinalProposta &dataFinalProposta){
    this->dataFinalProposta = dataFinalProposta;
}

inline DataFinalProposta Proposta::getDataFinalProposta() const{
    return dataFinalProposta;
}

inline void Proposta::setHospedesProposta(const NumeroProposta &hospedesProposta){
    this->hospedesProposta = hospedesProposta;
}

inline NumeroProposta Proposta::getHospedesProposta() const{
    return hospedesProposta;
}

inline void Proposta::setValorProposta(const MoedaProposta &valorProposta){
    this->valorProposta = valorProposta;
}

inline MoedaProposta Proposta::getValorProposta() const{
    return valorProposta;
}
#endif // ENTIDADES_H

