#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("O primeiro numero e o maior.\n");
    } else if (n2 > n1) {
        printf("O segundo numero e o maior!.\n");
    } else {
        printf("Os numeros sao iguais!\n");
    }
    return 0;
}
