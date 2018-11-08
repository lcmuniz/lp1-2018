#include <stdio.h>
#include <string.h>

// Receber um nome e imprimí-lo de trás pra frente.

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("e09: Recebe um nome e imprimí-lo de trás pra frente.\n");
        printf("Uso: e09 <nome>\n");
        return 1;
    }

    char *nome = argv[1];
    int tam = strlen(nome);

    for (int i = tam; i >= 0; i--)
    {
        printf("%c", nome[i]);
    }

    printf("\n");

}
