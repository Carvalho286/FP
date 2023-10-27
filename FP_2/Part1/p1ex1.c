//
// Created by Miguel Carvalho on 26/10/2023.
//

#include <stdio.h>

void p1ex1() {
    int n1, n2;

    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) {
        printf("O maior número é: %d\n", n1);
        printf("Ordem: %d %d", n1, n2);
    } else if (n2 > n1) {
        printf("O maior número é: %d", n2);
        printf("Ordem: %d %d", n2, n1);
    } else {
        printf("Os números são iguais.");
    }


}