#include <stdio.h>

long long fatorial(int x) {
    long long f = 1;
    for (int i = 2; i <= x; i++) f *= i;
    return f;
}

int main() {
    int n, k;
    printf("Digite n e k: ");
    if (scanf("%d %d", &n, &k) != 2 || n < 0 || k < 0 || k > n) {
        printf("Entrada invalida\n");
        return 0;
    }

    long long num = fatorial(n);
    long long den = fatorial(k) * fatorial(n - k);
    long long c = num / den;

    printf("C(%d, %d) = %lld\n", n, k, c);
    return 0;
}
