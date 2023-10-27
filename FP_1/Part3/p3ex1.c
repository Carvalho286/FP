//
// Created by Miguel Carvalho on 19/10/2023.
//

#include <stdio.h>

void p3ex1() {
    double vencimento, subsidio, irs, segSocial, entPat, salarioTotal, dias, codigo;

    printf("Indique o código de funcionario e o número de horas que trabalhou: ");
    scanf("%lf %lf", &codigo, &dias);

    vencimento = 40 * dias;
    subsidio = 5 * dias;

    irs = vencimento * 0.1;
    segSocial = vencimento * 0.11;
    entPat = vencimento * 0.2375;

    printf("O valor ilíquido a receber fruto do vencimento é igual a %.2f€\n", vencimento);
    printf("O valor total subsídio de alimentação é igual a %.2f€\n", subsidio);
    printf("O valor da retenção de IRS a entregar ao estado é igual a %.2f€\n", irs);
    printf("O valor total a entregar à Segurança Social (ambos os encargos) é igual a %.2f€\n", (segSocial + entPat));
    printf("O valor líquido a receber pelo funcionário é igual a %.2f€\n", (vencimento + subsidio) - (irs + segSocial));
}