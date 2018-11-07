#include <stdio.h>
#include <string.h>

// Receber um nome e imprimí-lo 10 vezes na tela.

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("e03: Imprime um nome 10 vezes na tela.\n");
        printf("Uso: e03 <nome>\n");
        return 1;
    }

    char *nome = argv[1];

    for (int i = 0; i < 10; i++) {
        printf("%2d %s\n", i+1, nome);
    }

}

