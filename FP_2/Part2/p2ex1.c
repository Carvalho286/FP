//
// Created by Miguel Carvalho on 26/10/2023.
//

#include <stdio.h>

void p2ex1() {
    int n1, n2;
    double total;
    char operador;

    printf("Insere o primeiro número: ");
    scanf("%d", &n1);
    printf("Insere o segundo número: ");
    scanf("%d", &n2);
    printf("Insere um dos seguintes operadores (+ - * /): ");
    scanf("\n %c", &operador);


    switch (operador) {
        case '+':
            total = n1 + n2;
            printf("O resultado da soma entre %d e %d é %.2lf", n1, n2, total);
            break;

        case '-':
            total = n1 - n2;
            printf("O resultado da subtração entre %d e %d é %.2lf", n1, n2, total);
            break;

        case '*':
            total = n1 + n2;
            printf("O resultado da multiplicação entre %d e %d é %.2lf", n1, n2, total);
            break;

        case '/':
            total = n1 + n2;
            printf("O resultado da divisão entre %d e %d é %.2lf", n1, n2, total);
            break;

        default:
            printf("Erro, operador desconhecido.");
            break;
    }
}