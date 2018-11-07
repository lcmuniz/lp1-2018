#include <stdio.h>
#include <string.h>

// Receber um nome e mostrar quantas letras tem.

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("e06: Receber um nome e mostrar quantas letras tem.\n");
        printf("Uso: e06 <nome>\n");
        return 1;
    }

    int tam = strlen(argv[1]);

    printf("O nome tem %d letras.\n", tam);

}


