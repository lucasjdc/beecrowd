#include <stdio.h>

int main() {
    int casos = 0; // número de casos de teste
    int pa = 0; // população da cidade A
    int pb = 0; // população da cidade B
    float g1 = 0.0; // crescimento populacional da cidade A
    float g2 = 0.0; // crescimento populacional da cidade B
    int anos = 102;
    
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++) {
        scanf("%d %d %f %f", &pa, &pb, &g1, &g2);
        g1 /= 100;
        g2 /= 100;

        for (int j = 1; j < anos; j++) {
            pa = pa + (pa * g1);
            pb = pb + (pb * g2);
            if  (pb < pa && j < 101) {
                printf("%d anos.\n", j);
                break;
            }
            if ( j > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
    }
}