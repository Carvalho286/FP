//
// Created by Miguel Carvalho on 26/10/2023.
//

#include <stdio.h>

void p1ex4() {
    int n;

    printf("Insere o número: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O número %d é par", n);
    } else {
        printf("O número %d é ímpar", n);
    }
}
