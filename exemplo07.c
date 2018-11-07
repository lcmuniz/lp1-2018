
#include <stdio.h>
#include <string.h>
#include <cs50.h>

// Receber um nome e imprimir tantas vezes quantos forem seus caracteres.

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("e07: // Recebe um nome e imprime tantas vezes quantos forem seus caracteres.\n");
        printf("Uso: e07 <nome>\n");
        return 1;
    }

    string nome = argv[1];
    int tam = strlen(nome);

    for (int i = 0; i < tam; i++) {
        printf("%2d %s\n", i+1, nome);
    }

}

