#include <stdio.h>

int main()
{
    int peso, pesoMaior, gramas;
    printf("Digite seu peso atual: ");
    scanf("%d", &peso);
   	pesoMaior = peso + ( peso * 0.05 );
   	gramas = peso * 1000;
    printf("Seu peso se tivesse um aumento de 5% seria: %d, e em gramas seria %d!", pesoMaior, gramas);

    return 0;
}
