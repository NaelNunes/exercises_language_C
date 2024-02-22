#include <stdio.h>

int main() {
    int n, d, resto;
    printf("Vamos dividir? Me forneca o numerador e o denominador, nesta ordem: ");
    scanf("%d %d", &n, &d);
    resto = n % d;
    printf("O resto da divisao é: %d\n", resto);
    return 0;
}

