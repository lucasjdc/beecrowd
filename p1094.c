#include <stdio.h>

int main () {
    int n = 0;
    int quantia = 0;
    int total = 0;
    char tipo;
    int totalDeCoelhos = 0;
    int totalDeRatos = 0;
    int totalDeSapos  = 0;
    double porcentagemDeCoelhos =  0;
    double porcentagemDeRatos = 0;
    double porcentagemDeSapos = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %c", &quantia, &tipo);

        while (getchar() != '\n');
        
        total += quantia;

        if (tipo == 'C') {
            totalDeCoelhos += quantia;
        }

        if (tipo == 'S') {
            totalDeSapos += quantia;
        }

        if (tipo == 'R') {
            totalDeRatos += quantia;
        }
    }

    porcentagemDeCoelhos = (double)totalDeCoelhos / total * 100;
    porcentagemDeRatos = (double)totalDeRatos / total * 100;
    porcentagemDeSapos = (double)totalDeSapos / total * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalDeCoelhos);
    printf("Total de ratos: %d\n", totalDeRatos);
    printf("Total de sapos: %d\n", totalDeSapos);
    printf("Percentual de coelhos: %.2lf %%\n", porcentagemDeCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", porcentagemDeRatos);
    printf("Percentual de sapos: %.2lf %%\n", porcentagemDeSapos);
    
    return  0;
}