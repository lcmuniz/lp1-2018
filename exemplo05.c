#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main()
{

    string nome = get_string("Nome: ");
    string sexo = get_string("Sexo: ");
    int idade = get_int("Idade: ");

    char s = toupper(sexo[0]);

    if ((s == 'F' || s == 'M') && idade > 25)
    {
        printf("ACEITA\n");
    }
    else {
        printf("NÃO ACEITA\n");
    }

}
