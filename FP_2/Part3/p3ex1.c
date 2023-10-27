//
// Created by Miguel Carvalho on 27/10/2023.
//

#include <stdio.h>

void p3ex1() {
    double vencimento, subsidio, irs, segSocial, entPat, dias;
    char cargo;
    int codigo;

    do {
        printf("Indique o código e o cargo do funcionario e o número de horas que trabalhou: ");
        scanf("%d %c %lf", &codigo, &cargo, &dias);

        switch (cargo) {
            case 'a':
                vencimento = 80 * dias;
                subsidio = 7.5 * dias;

                if (vencimento < 1000) {
                    irs = vencimento * 0.1;
                    segSocial = vencimento * 0.09;
                    entPat = vencimento * 0.21;
                } else {
                    irs = vencimento * 0.2;
                    segSocial = vencimento * 0.09;
                    entPat = vencimento * 0.21;
                }

                printf("O valor ilíquido a receber fruto do vencimento é igual a %.2f€\n", vencimento);
                printf("O valor total subsídio de alimentação é igual a %.2f€\n", subsidio);
                printf("O valor da retenção de IRS a entregar ao estado é igual a %.2f€\n", irs);
                printf("O valor total a entregar à Segurança Social (ambos os encargos) é igual a %.2f€\n", (segSocial + entPat));
                printf("O valor líquido a receber pelo funcionário é igual a %.2f€\n", (vencimento + subsidio) - (irs + segSocial));
                break;

            case 'c':
                vencimento = 60 * dias;
                subsidio = 7.5 * dias;

                if (vencimento < 1000) {
                    irs = vencimento * 0.1;
                    segSocial = vencimento * 0.11;
                    entPat = vencimento * 0.2375;
                } else {
                    irs = vencimento * 0.2;
                    segSocial = vencimento * 0.11;
                    entPat = vencimento * 0.2375;
                }

                printf("O valor ilíquido a receber fruto do vencimento é igual a %.2f€\n", vencimento);
                printf("O valor total subsídio de alimentação é igual a %.2f€\n", subsidio);
                printf("O valor da retenção de IRS a entregar ao estado é igual a %.2f€\n", irs);
                printf("O valor total a entregar à Segurança Social (ambos os encargos) é igual a %.2f€\n", (segSocial + entPat));
                printf("O valor líquido a receber pelo funcionário é igual a %.2f€\n", (vencimento + subsidio) - (irs + segSocial));
                break;

            case 'e':
                vencimento = 40 * dias;
                subsidio = 5 * dias;

                if (vencimento < 1000) {
                    irs = vencimento * 0.1;
                    segSocial = vencimento * 0.11;
                    entPat = vencimento * 0.2375;
                } else {
                    irs = vencimento * 0.2;
                    segSocial = vencimento * 0.11;
                    entPat = vencimento * 0.2375;
                }

                printf("O valor ilíquido a receber fruto do vencimento é igual a %.2f€\n", vencimento);
                printf("O valor total subsídio de alimentação é igual a %.2f€\n", subsidio);
                printf("O valor da retenção de IRS a entregar ao estado é igual a %.2f€\n", irs);
                printf("O valor total a entregar à Segurança Social (ambos os encargos) é igual a %.2f€\n", (segSocial + entPat));
                printf("O valor líquido a receber pelo funcionário é igual a %.2f€\n", (vencimento + subsidio) - (irs + segSocial));
                break;
        }
    } while (cargo != 'a' || cargo != 'c' || cargo != 'e');
}
