//
// Created by Miguel Carvalho on 19/10/2023.
//

#include <stdio.h>

void p2ex5() {
    int totalMinutes = 0;
    int totalSeconds = 0;

    for (int i = 1; i <= 5; i++) {
        int minutes, seconds;
        printf("Digite a duração da canção %d (minutos segundos): ", i);
        scanf("%d %d", &minutes, &seconds);

        totalMinutes += minutes;
        totalSeconds += seconds;
    }

    while (totalSeconds >= 60) {
        totalMinutes++;
        totalSeconds -= 60;
    }

    int hours = totalMinutes / 60;
    totalMinutes %= 60;

    printf("A duração total do álbum é: %02d:%02d:%02d\n", hours, totalMinutes, totalSeconds);
}