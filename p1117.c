#include <stdio.h>

int main() {
    double nota = 0;
    double soma = 0;
    double media = 0;
    int notaValida = 0;

    while (notaValida < 2){
        scanf("%lf", &nota);
        if (nota >= 0.0  && nota <= 10.0){
            soma += nota;
            notaValida++;
        } else {
            printf("nota invalida\n");
        }
    }
    media = soma / 2;
    printf("media = %.2lf\n", media);
    return 0;
}