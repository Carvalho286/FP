//
// Created by Miguel Carvalho on 19/10/2023.
//

#include <stdio.h>

void p2ex2() {
    double nota1, nota2, nota3;

    printf("Insira a 1ª nota: ");
    scanf("%lf", &nota1);
    printf("Insira a 2ª nota: ");
    scanf("%lf", &nota2);
    printf("Insira a 3ª nota: ");
    scanf("%lf", &nota3);

    printf("A média aritmética das 3 notas é igual a %lf\n", (nota1 + nota2 + nota3) / 3);
    printf("A média ponderada das 3 notas é igual a %lf", (nota1 * 0.2) + (nota2 * 0.3) + (nota3 * 0.5));
}