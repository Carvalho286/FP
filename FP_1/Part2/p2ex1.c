//
// Created by Miguel Carvalho on 19/10/2023.
//

#include <stdio.h>

void p2ex1() {
    char car, suc, ant, carO;

    printf("Insere o Caractér: ");
    scanf("%c", &car);

    carO = car;
    ant = --car;
    suc = car+2;

    printf("O antecessor do caractér %c é: %c\n", carO, ant);
    printf("O sucessor do caractér %c é: %c", carO, suc);
}


