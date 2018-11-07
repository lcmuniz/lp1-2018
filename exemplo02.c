#include <stdio.h>
#include <string.h>

// Receber um nome e imprimir as letras nas posições ímpares.

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("e02: Imprime as letras nas posições ímpares.\n");
        printf("Uso: e02 <nome>\n");
        return 1;
    }

    char *nome = argv[1];
    int tam = strlen(nome);

    printf("Letras nas posições ímpares: ");
    for (int i = 0; i < tam; i+=2) {
        printf("%c", nome[i]);
    }
    printf("\n");



}

