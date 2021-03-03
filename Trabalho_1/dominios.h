#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class CodigoImovel{
    private:
        string CodigoImovel;
        const static string LIMITE = "00000"

        void validar(string);

    public:
        void setCodigoImovel(string);

        string getCodigoImovel() const {
            return codigoImovel;
        }
};

class Classe{
    private:
        int classe;
        const static int LIMITEMAXIMO = 3;
        const static int LIMITEMINIMO = 1;

        void validar(int);

    public:

        void setClasse(int);

        int getClasse() const {
            return classe;
        }
};

class Descricao{
    private:
        string descricao;

        void validar(string);

    public:

        void setDescricao(string);

        string getDescricao() const {
            return descricao;
        }
};

class Data{
    private:
        int data;
        const static int LIMITEMAXIMO = 31122099;
        const static int LIMITEMINIMO = 01012021;

        void validar(int);

    public:

        void setData(int);

        int getData() const{
            return data;
        }
};

class Numero{
    private:
        int numero;
        const static int LIMITEMAXIMO = 20;
        const static int LIMITEMINIMO = 0;

        void validar(int);

    public:
        void setNumero(int);

        int getNumero() const{
            return numero;
        }
};

class Moeda{
    private:
        int moeda;
        const static double LIMITEMAXIMO = 1000000.00;
        const static double LIMITEMINIMO = 0.00;

        void validar(double);

    public:
        void setMoeda(double);

        int getMoeda() const{
            return moeda;
        }
};

class Nome{
    private:
        string nome;

        void validar(string);

    public:
        void setNome(string);

        string getNome() const{
            return nome;
        }
};

class Email{
    private:
        string email;

        void validar(string);

    public:
        void setEmail(string);

        string getEmail() const{
            return email;
        }
};

class Senha{
    private:
        string senha;

        void validar(string);

    public:
        void setSenha(string);

        string getSenha() const{
            return senha;
        }
};

class Telefone{
    private:
        int telefone;
        const static int LIMITE = 000000000000;

        void validar(int);

    public:

        void setTelefone(int);

        int getTelefone() const{
            return Telefone;
        }
};
