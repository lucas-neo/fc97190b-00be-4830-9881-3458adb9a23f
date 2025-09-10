#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    if (scanf("%d", &n) != 1 || n == 0) {
        printf("Entrada invalida\n");
        return 0;
    }

    if (n < 0) n = -n;

    printf("Divisores: ");
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
