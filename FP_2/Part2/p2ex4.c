//
// Created by Miguel Carvalho on 27/10/2023.
//

#include <stdio.h>

void p2ex4() {
    double n1, n2;

    do {
        printf("Insere a primeira nota: ");
        scanf("%lf", &n1);
    } while (n1 < 0 || n1 > 20);

    do {
        printf("Insere a segunda nota: ");
        scanf("%lf", &n2);
    } while (n2 < 0 || n2 > 20);

    printf("A média ponderada é igual a %.2lf\n", (n1 * 0.4) + (n2 * 0.6));

    if ((n1 * 0.4) + (n2 * 0.6) > 9.5) {
        printf("O aluno passou!");
    } else {
        printf("O aluno não passou!");
    }
}