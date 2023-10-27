//
// Created by Miguel Carvalho on 26/10/2023.
//

#include <stdio.h>

void p1ex2() {
    int n1, n2, n3;
    int menor = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    int array[]= {n1, n2, n3};

    for (int i = 0; i < 3; i++) {
        if (menor == 0) {
            menor = array[i];
        }
        if (array[i] < menor) {
            menor = array[i];
        }
    }

    printf("O menor número é: %d", menor);
}