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
#endif
