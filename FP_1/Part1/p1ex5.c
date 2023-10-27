//
// Created by Miguel Carvalho on 19/10/2023.
//

#include <stdio.h>

void ex5() {

    int a = 2, b = 4, c = 3, d;
    d = (((a = a + 1) + ++b) * c++) % (2 * c);
    printf("%d, %d, %d, %d", a, b, c, d);


}