//
// Created by Miguel Carvalho on 26/10/2023.
//

#include <stdio.h>

void p2ex2() {
    double saldo, montante;

    printf("Digite o saldo da sua conta: ");
    scanf("%.2lf", &saldo);
    printf("Digite o montante da transação pretendida: ");
    scanf("%.2lf", &montante);

    if (saldo > montante && (saldo - montante) > 0) {
        printf("A operação é possivel e vais ficar com saldo no valor de %.2lf.", (saldo - montante));
    }
}