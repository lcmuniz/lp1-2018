
#include <stdio.h>
#include <string.h>

// Receber uma mensagem e imprimir quantas letras A, E, I, O, U tem esta mensagem.

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("e08: // Receber uma mensagem e imprimir quantas letras A, E, I, O, U tem esta mensagem.\n");
        printf("Uso: e08 <nome>\n");
        return 1;
    }

    char *nome = argv[1];
    int tam = strlen(nome);

    int qa = 0;
    int qe = 0;
    int qi = 0;
    int qo = 0;
    int qu = 0;

    for (int i = 0; i < tam; i++)
    {
        if (nome[i] == 'A' || nome[i] == 'a')
        {
            qa++;
        }
        else if (nome[i] == 'E' || nome[i] == 'e')
        {
            qe++;
        }
        else if (nome[i] == 'I' || nome[i] == 'i')
        {
            qi++;
        }
        else if (nome[i] == 'O' || nome[i] == 'o')
        {
            qo++;
        }
        else if (nome[i] == 'U' || nome[i] == 'u')
        {
            qu++;
        }
    }

    printf("A: %d\n", qa);
    printf("E: %d\n", qe);
    printf("I: %d\n", qi);
    printf("O: %d\n", qo);
    printf("U: %d\n", qu);

}


