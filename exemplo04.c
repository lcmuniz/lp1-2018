#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

// Ler nome, endereço, telefone e mostrar na tela.

int main(int argc, char **argv)
{

    string nome;
    string endereco;
    string telefone;

    nome = get_string("Nome: ");
    endereco = get_string("Endereço: ");
    telefone = get_string("Telefone: ");

    printf("Nome: %s\n", nome);
    printf("Endereço: %s\n", endereco);
    printf("Telefone: %s\n", telefone);

}

