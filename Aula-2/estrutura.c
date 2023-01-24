#include <stdio.h>
#include <malloc.h>
#define ALTURAMAXIMA 255

typedef struct {
    int peso;
    int altura;
} PesoAltura;

/* 
    A sintaxe struct {...} define uma estrutura com os campos definidos dentro das chaves
    Já a sintaxe typedef...PesoAltura define o nome PesoAltura para o que foi definido
    nas reticências
*/
int main() {

    PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));

    pessoa1->altura = 150;
    pessoa1->peso = 60;

    printf("Peso: %ikg, Altura: %icm.\n", pessoa1->peso, pessoa1->altura);

    if(pessoa1->altura>ALTURAMAXIMA) printf("Altura acima da maxima.\n");
    else printf("Altura abaixo da maxima.\n");

    return 0;
}