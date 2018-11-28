
#include <stdio.h>

int main()
{
    int soma = 0;
    int quantidade = 0;
    int numero = 0;
    
    printf("Digite números inteiros (-1 para sair):\n");
    
    do {
        printf("> ");
        scanf("%d", &numero);
        if (numero == -1) 
        {
            break;    
        }
        if (numero % 2 == 1) 
        {
            quantidade++;
            soma += numero;
        }
    } while (1);
    
    float media = (float) soma / quantidade;
    
    printf("Soma = %d\n", soma);
    printf("Média = %f\n", media);
    
    return 0;
}
