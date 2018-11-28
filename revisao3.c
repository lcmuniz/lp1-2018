// Faça um programa que peça dois números ao usuário e imprima seus endereços de memória.
// Altere os valores das variáveis usando ponteiros.

#include <stdio.h>

int main()
{

    int n1, n2;
    
    printf("N1 = ");
    scanf("%d", &n1);
    
    printf("N2 = ");
    scanf("%d", &n2);
    
    printf("Endereço de N1 = %p\n", &n1);
    printf("Endereço de N2 = %p\n", &n2);
    
    int *p1 = &n1;
    int *p2 = &n2;

    *p1 = 100;
    *p2 = 200;
    
    printf("N1 = %d\n", n1);
    printf("N2 = %d\n", n2);

    return 0;
}
