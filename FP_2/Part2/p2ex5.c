//
// Created by Miguel Carvalho on 27/10/2023.
//

#include <stdio.h>

void p2ex5() {
    double x, y;

    printf("Insere as coordenadas x e y: ");
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0) {
        printf("O ponto encontra-se na origem.");
    } else if (x >= 0 && y >= 0) {
        printf("O ponto encontra-se no quadrante 1.");
    } else if (x < 0 && y >= 0) {
        printf("O ponto encontra-se no quadrante 2.");
    } else if (x < 0 && y < 0) {
        printf("O ponto encontra-se no quadrante 3.");
    } else {
        printf("O ponto encontra-se no quadrante 4.");
    }
}