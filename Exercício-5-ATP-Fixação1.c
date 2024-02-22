#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Informe tres numeros ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3) {
    	printf("O primeiro numero e o maior!");
    } else if (n2 > n3) {
    	printf("O segundo numero e maior!");
    } else if (n3 > n2) {
    	printf("O terceiro numero e maior");
    } else {
    	printf("Os numeros sao iguais");
    }
    
    return 0;
}
