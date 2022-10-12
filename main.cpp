#include <iostream>
#include <string>

using namespace std;

class peca{
    private:
        string nome;
        string cor;
    public:
        peca(string nome, string cor){
            this->nome = nome;
            this->cor = cor;
        }
};

int main(){
    return 0;
}