// Faça um programa que peça ao usuário 10 números e os armazene em um vetor.
// Depois, imprima o vetor invertido.

#include <stdio.h>

int main()
{
    int a[10];
    int q = 5;
    
    for (int i = 0; i < q; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("A invertido = ");
    for (int i = q - 1; i >= 0; i--) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}
