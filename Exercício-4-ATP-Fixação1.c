#include <stdio.h>

int main() {
    int num1, num2;
    printf("Forneca dois numeros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2) {
    	printf("Os numeros sao iguais!");
    } else if (num1 < num2) {
    	printf("O primeiro numero e menor!");
    } else {
    	printf("O segundo numero e menor!"); 
    }
    return 0;
}

