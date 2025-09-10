#include <stdio.h>

int main() {
    int a, b, t;
    printf("Digite dois numeros: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida\n");
        return 0;
    }

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
    }
    printf("MDC: %d\n", a);
    return 0;
}
