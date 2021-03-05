#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;
//Usuário
class Nome{
    private:
        string nome;
        const static int LIMITEMINIMO=5;
        const static int LIMITEMAXIMO=25;
        void validar(string);

    public:
        void setNome(string);

        string getNome() const{
            return nome;
        }
};
//*************MELHORAR TESTE*************
class Email{
    private:
        string email;
        const static int LIMITEMAXIMO=31;
        void validar(string);

    public:
        void setEmail(string);

        string getEmail() const{
            return email;
        }
};
//*************MELHORAR TESTE*************
class Senha{
    private:
        string senha;
        const static int LIMITEMAXIMO=6;
        void validar(string);

    public:
        void setSenha(string);

        string getSenha() const{
            return senha;
        }
};

class Telefone{
    private:
        string telefone;
        const static int LIMITEMAXIMO=12;
        void validar(string);

    public:
        void setTelefone(string);

        string getTelefone() const{
            return telefone;
        }
};

//Imóvel
class CodigoImovel{
    private:
        string codigoImovel;
        string LIMITEMINIMO="00000";
        const static int LIMITEMAXIMO=5;
        void validar(string);

    public:
        void setCodigoImovel(string);

        string getCodigoImovel() const{
            return codigoImovel;
        }
};

class Classe{
    private:
        int classe;
        const static int LIMITEMINIMO=1;
        const static int LIMITEMAXIMO=3;
        void validar(int);

    public:
        void setClasse(int);

        int getClasse() const{
            return classe;
        }
};

class Descricao{
    private:
        string descricao;
        const static int LIMITEMINIMO=5;
        const static int LIMITEMAXIMO=30;
        void validar(string);

    public:
        void setDescricao(string);

        string getDescricao() const{
            return descricao;
        }
};

class Endereco{
    private:
        string endereco;
        const static int LIMITEMINIMO=5;
        const static int LIMITEMAXIMO=20;
        void validar(string);

    public:
        void setEndereco(string);

        string getEndereco() const{
            return endereco;
        }
};
//*************MELHORAR TESTE*************
class DataInicialImovel{
    private:
        int dataInicialImovel;
        const static int LIMITEMAXIMO = 311299;
        const static int LIMITEMINIMO = 010121;
        void validar(int);

    public:
        void setDataInicialImovel(int);


        int getDataInicialImovel() const {
            return dataInicialImovel;
        }
};

class DataFinalImovel{
    private:
        int dataFinalImovel;
        const static int LIMITEMAXIMO = 311299;
        const static int LIMITEMINIMO = 010121;
        void validar(int);

    public:
        void setDataFinalImovel(int);


        int getDataFinalImovel() const {
            return dataFinalImovel;
        }
};
#endif
