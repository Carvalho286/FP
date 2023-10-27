//
// Created by Miguel Carvalho on 19/10/2023.
//

#include <stdio.h>

void p2ex4(){
    double valor1, valor2, valor3, total, desconto, valorAPagar;

    printf("Insere o 1º valor: ");
    scanf("%lf", &valor1);
    printf("Insere o 2º valor: ");
    scanf("%lf", &valor2);
    printf("Insere o 3º valor: ");
    scanf("%lf", &valor3);

    total = valor1 + valor2 + valor3;
    desconto = 0.10 * total;
    valorAPagar = total - desconto;

    printf("Total dos produtos: %.2f€\n", total);
    printf("Desconto (10%%): %.2f€\n", desconto);
    printf("Valor a pagar: %.2f€\n", valorAPagar);
}