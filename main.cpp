#include <iostream>
#include <string>
#include <string.h>

#define VERMELHO "\x1b[31m"
#define VERDE "\x1b[32m"
#define RESET "\x1b[0m"

using namespace std;

typedef struct casa{
    string coordenada;
    string nome_peca;
    string cor_peca;
    struct casa * ant;
    struct casa * prox;
}casa;

casa * inicio = NULL;
casa * fim = NULL;
int tam = 0;

void add_casa(string coordenada, string nome_peca, string cor_peca){
    casa * nova = new(casa);
    nova->coordenada = coordenada;
    nova->nome_peca = nome_peca;
    nova->cor_peca = cor_peca;

    nova->prox = NULL;
    nova->ant = NULL;

    if(inicio == NULL){
        inicio = nova;
        fim = nova;
    }else{
        fim->prox = nova;
        nova->ant = fim;
        fim = nova;
    }
    tam++;
}
void iniciar_tabuleiro(){
    add_casa("a8","T","Preto");add_casa("b8","C","Preto");add_casa("c8","B","Preto");
    add_casa("d8","D","Preto");add_casa("e8","R","Preto");add_casa("f8","B","Preto");
    add_casa("g8","C","Preto");add_casa("h8","T","Preto");

    add_casa("a7","P","Preto");add_casa("b7","P","Preto");add_casa("c7","P","Preto");
    add_casa("d7","P","Preto");add_casa("e7","P","Preto");add_casa("f7","P","Preto");
    add_casa("g7","P","Preto");add_casa("h7","P","Preto");

    add_casa("a6",".","");add_casa("b6",".","");add_casa("c6",".","");add_casa("d6",".","");
    add_casa("e6",".","");add_casa("f6",".","");add_casa("g6",".","");add_casa("h6",".","");

    add_casa("a5",".","");add_casa("b5",".","");add_casa("c5",".","");add_casa("d5",".","");
    add_casa("e5",".","");add_casa("f5",".","");add_casa("g5",".","");add_casa("h5",".","");

    add_casa("a4",".","");add_casa("b4",".","");add_casa("c4",".","");add_casa("d4",".","");
    add_casa("e4",".","");add_casa("f4",".","");add_casa("g4",".","");add_casa("h4",".","");

    add_casa("a3",".","");add_casa("b3",".","");add_casa("c3",".","");add_casa("d3",".","");
    add_casa("e3",".","");add_casa("f3",".","");add_casa("g3",".","");add_casa("h3",".","");

    add_casa("a2","P","Branco");add_casa("b2","P","Branco");add_casa("c2","P","Branco");
    add_casa("d2","P","Branco");add_casa("e2","P","Branco");add_casa("f2","P","Branco");
    add_casa("g2","P","Branco");add_casa("h2","P","Branco");

    add_casa("a1","T","Branco");add_casa("b1","C","Branco");add_casa("c1","B","Branco");
    add_casa("d1","D","Branco"); add_casa("e1","R","Branco");add_casa("f1","B","Branco");
    add_casa("g1","C","Branco");add_casa("h1","T","Branco");
}

void ver(){
    casa * aux = inicio;
    for(int i=0; i<tam; i++){
        if(i==8||i==16||i==24||i==32||i==40||i==48||i==56){
            cout<<endl;
        }
        cout << aux->nome_peca << "  ";
        aux = aux->prox;
    }
}

void movimento(string coord1, string coord2){
    casa * aux = inicio;
    casa * aux2 = inicio;
    while(aux != NULL && aux->coordenada != coord1){ //chegar na coord 1
        aux = aux->prox;
    }
    if(aux->coordenada == coord1 && aux->nome_peca != "."){
        while(aux2 != NULL && aux2->coordenada != coord2){ //chegar na coord 1
            aux2 = aux2->prox;
        }
        if(aux2->coordenada == coord2){
            if(aux2->cor_peca != aux->cor_peca){
                aux2->nome_peca = aux->nome_peca;
                aux2->cor_peca = aux->cor_peca;
                aux->nome_peca = ".";
                aux->cor_peca = "";
                return;
            }
        }
    }
    cout << "\nmovimento invalido\n";
}

int main(){
    iniciar_tabuleiro();
    movimento("d8","a7");
    ver();
    return 0;
}