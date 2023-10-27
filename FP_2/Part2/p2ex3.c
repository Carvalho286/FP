//
// Created by Miguel Carvalho on 26/10/2023.
//

#include <stdio.h>

void p2ex3() {
    int option;

    do {
        printf("-----------------------------------\n");
        printf("1 - Criar / 2 - Atualizar / 3 - Eliminar / 4 - Sair");
        scanf("%d", &option);
    } while (option < 1 || option > 4);

    switch (option) {
        case 1:
            printf("Escolheu a opção 1.");
            break;
        case 2:
            printf("Escolheu a opção 2.");
            break;
        case 3:
            printf("Escolheu a opção 3.");
            break;
        case 4:
            break;
    }
}
