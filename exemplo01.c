#include <stdio.h>
#include <string.h>

// Receber um nome e imprimir as 4 primeiras letras

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("e01: Imprime as 4 primeiras letras de um nome.\n");
        printf("Uso: e01 <nome>\n");
        return 1;
    }

    char *nome = argv[1];

    printf("Quatro primeiras letras: ");
    for (int i = 0; i < 4; i++) {
        printf("%c", nome[i]);
    }
    printf("\n");



}

