#include <iostream>
#include <string>

using namespace std;

class peca{
    private:
        string nome;
        string cor;
        string coordenada;
    public:
        peca(string nome, string cor, string coordenada){
            this->nome = nome;
            this->cor = cor;
            this->coordenada = coordenada;
        }
};

void iniciar_tabuleiro(){
    peca t1("T","Branca","a1"), t2("T","Branca","h1");
    peca t3("T","Preta","a8"), t4("T","Preta","h8");

    peca b1("T","Branca","b1"), b2("B","Branca","g1");
    peca b3("B","Preta","b8"), b4("B","Preta","g8");

    peca c1("C","Branca","c1"), c2("C","Branca","f1");
    peca c3("C","Preta","c8"), c4("C","Preta","f8");

    peca d1("D","Branca","d1"), d2("D","Preta","d8");

    peca r1("R","Branca","e1"), r2("R","Preta","e8");

    peca p1("P","Branca","a2"),p2("P","Branca","b2"),p3("P","Branca","c2");
    peca p4("P","Branca","d2"),p5("P","Branca","e2"),p6("P","Branca","f2");
    peca p7("P","Branca","g2"),p8("P","Branca","h2");
    
    peca p9("P","Preta","a7"),p10("P","Preta","b7");
    peca p11("P","Preta","c7"),p12("P","Preta","d7"),p13("P","Preta","e7");
    peca p14("P","Preta","f7"),p15("P","Preta","g7"),p16("P","Preta","h7");
}



int main(){
    return 0;
}