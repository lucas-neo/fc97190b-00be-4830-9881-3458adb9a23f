#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;
    printf("Digite as quatro notas: ");
    if (scanf("%f %f %f %f", &n1, &n2, &n3, &n4) != 4) {
        printf("Entrada invalida\n");
        return 0;
    }

    media = (n1 + n2 + n3 + n4) / 4.0f;

    if (media >= 7.0f) {
        printf("Aprovado por media\n");
    } else if (media >= 4.0f) {
        printf("Final\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}
