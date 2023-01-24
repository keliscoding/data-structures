/*
    Em C há uma função para alocação de memória: malloc (memory allocation).
    - Recebe como parâmetro o número de bytes que se deseja alocar
    - Retorna o endereço inicial do bloco de bytes que foi alocado, 
    porém esse retorno tem o tipo void* (ponteiro para void)
    - Há um operador chamado sizeof que recebe como um tipo (simples ou composto) e
    retorna a quantidade de bytes ocupada por esse tipo
*/

#include <stdio.h>
#include <malloc.h>

int main() {
    int* y = (int*) malloc(sizeof(int));
    *y = 20;
    int z = sizeof(int);
    printf("*y=%i, z=%i\n", *y, z);
    return 0;
}