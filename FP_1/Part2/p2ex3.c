//
// Created by Miguel Carvalho on 19/10/2023.
//

#include <stdio.h>

void troca(int *valor1,int *valor2)
{
    *valor1^=*valor2;
    *valor2^=*valor1;
    *valor1^=*valor2;
}

void p2ex3() {
    int valor1, valor2;

    printf("Insere o valor 1: ");
    scanf("%d", &valor1);
    printf("Insere o valor 2: ");
    scanf("%d", &valor2);

    troca(&valor1, &valor2);

    printf("O valor 1 é: %d\n", valor1);
    printf("O valor 2 é: %d", valor2);
}
