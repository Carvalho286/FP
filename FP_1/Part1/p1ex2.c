//
// Created by Miguel Carvalho on 19/10/2023.
//

#include <stdio.h>

void ex2(){
    float aluno1, aluno2, aluno3;

    printf("Insira a idade do aluno 1: ");
    scanf("%f", &aluno1);
    printf("Insira a idade do aluno 2: ");
    scanf("%f", &aluno2);
    printf("Insira a idade do aluno 3: ");
    scanf("%f", &aluno3);
    printf("A média de idades é: %f", (aluno1 + aluno2 + aluno3) / 3);
}