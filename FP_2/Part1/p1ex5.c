//
// Created by Miguel Carvalho on 26/10/2023.
//

#include <stdio.h>

void p1ex5() {
    int n;

    printf("Insere um número: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("O número é 1");
            break;

        case 2:
            printf("O número é 2");
            break;

        case 3:
            printf("O número é 3");
            break;

        default:
            printf("Número indefinido");
            break;
    }
}