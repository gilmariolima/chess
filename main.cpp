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
        peca();
        string get_nome(){
            return nome;
        }
        string get_cor(){
            return cor;
        }
        string get_coordenada(){
            return coordenada;
        }
        void set_nome(string novo_nome){
            nome = novo_nome;
        }
        void set_cor(string nova_cor){
            cor = nova_cor;
        }
        void set_coordenada(string nova_coord){
            coordenada = nova_coord;
        }
        peca * prox;
        peca * ant;
};


peca * inicio = NULL;
peca * fim = NULL;
int tam = 0;

void add(string nome, string cor, string coordenada){
    peca * novo = new(peca);

    novo->set_nome(nome);
    novo->set_cor(cor);
    novo->set_coordenada(coordenada);

    novo->prox = NULL;
    novo->ant = NULL;

    if(inicio == NULL){
        inicio = novo;
        fim = novo;
    }else{
        fim->prox = novo;
        fim->ant = novo;
        fim = novo;
    }
    tam++;
}

void iniciar_tabuleiro(){
    /*
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
    */
}

void ver(){
    peca * aux = inicio;
    while(aux != NULL){
        cout << "peca: "<<aux->get_nome()<<endl;
        aux = aux->prox;
    }
}

int main(){
    add("Torre1","Branca","a1");
    add("Torre2","Branca","h1");
    ver();
    return 0;
}