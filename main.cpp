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
        peca(){
        };
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

peca * i1 = NULL;peca * i2 = NULL;peca * i3 = NULL;peca * i4 = NULL;
peca * i5 = NULL;peca * i6 = NULL;peca * i7 = NULL;peca * i8 = NULL;

peca * f1 = NULL;peca * f2 = NULL;peca * f3 = NULL;peca * f4 = NULL;
peca * f5 = NULL;peca * f6 = NULL;peca * f7 = NULL;peca * f8 = NULL;

int tam1 = 0;int tam2 = 0;int tam3 = 0;int tam4 = 0;
int tam5 = 0;int tam6 = 0;int tam7 = 0;int tam8 = 0;

void add(string nome, string cor, string coordenada){
    peca * novo = new(peca);

    novo->set_nome(nome);
    novo->set_cor(cor);
    novo->set_coordenada(coordenada);

    novo->prox = NULL;
    novo->ant = NULL;

    char x = coordenada[1];
    if(x == '1'){
        if(i1 == NULL){
            i1 = novo;
            f1 = novo;
        }else{
            f1->prox = novo;
            f1->ant = novo;
            f1 = novo;
        }
    }else if(x == '2'){
        if(i2 == NULL){
            i2 = novo;
            f2 = novo;
        }else{
            f2->prox = novo;
            f2->ant = novo;
            f2 = novo;
        }
    }else if(x == '3'){
        if(i3 == NULL){
            i3 = novo;
            f3 = novo;
        }else{
            f3->prox = novo;
            f3->ant = novo;
            f3 = novo;
        }
    }else if(x == '4'){
        if(i4 == NULL){
            i4 = novo;
            f4 = novo;
        }else{
            f4->prox = novo;
            f4->ant = novo;
            f4 = novo;
        }
    }else if(x == '5'){
        if(i5 == NULL){
            i5 = novo;
            f5 = novo;
        }else{
            f5->prox = novo;
            f5->ant = novo;
            f5 = novo;
        }
    }else if(x == '6'){
        if(i6 == NULL){
            i6 = novo;
            f6 = novo;
        }else{
            f6->prox = novo;
            f6->ant = novo;
            f6 = novo;
        }
    }else if(x == '7'){
        if(i7 == NULL){
            i7 = novo;
            f7 = novo;
        }else{
            f7->prox = novo;
            f7->ant = novo;
            f7 = novo;
        }
    }else if(x == '8'){
        if(i8 == NULL){
            i8 = novo;
            f8 = novo;
        }else{
            f8->prox = novo;
            f8->ant = novo;
            f8 = novo;
        }    
    }
}

void iniciar_tabuleiro(){
    add("T","Preta","a8");add("B","Preta","b8");add("C","Preta","c8");
    add("D","Preta","d8");add("R","Preta","e8");add("C","Preta","f8");
    add("B","Preta","g8");add("T","Preta","h8");

    add("P","Preta","a7");add("P","Preta","b7");add("P","Preta","c7");
    add("P","Preta","d7");add("P","Preta","e7");add("P","Preta","f7");
    add("P","Preta","g7");add("P","Preta","h7");

    add("P","Branca","a2");add("P","Branca","b2");add("P","Branca","c2");
    add("P","Branca","d2");add("P","Branca","e2");add("P","Branca","f2");
    add("P","Branca","g2");add("P","Branca","h2");

    add("T","Branca","a1");add("B","Branca","b1");add("C","Branca","c1");
    add("D","Branca","d1");add("R","Branca","e1");add("C","Branca","f1");
    add("B","Branca","g1");add("T","Branca","h1");
}

void ver(){
    peca * aux = i1;
    for(int i=0; i < 8; i++){
        
        cout << aux->get_nome()<<"  ";
        aux = aux->prox;
    }
}

int main(){
    iniciar_tabuleiro();
    ver();
    return 0;
}