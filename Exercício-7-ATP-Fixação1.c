#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    int peso1, peso2;
    printf("Ola! Vamos calcular sua media?\n");
    printf("Digite sua primeira nota e o peso da prova: ");
    scanf("%f %d", &nota1, &peso1);
    printf("Digite sua segunda nota e o peso da prova: ");
    scanf("%f %d", &nota2, &peso2);
    media = ((nota1*peso1)+(nota2*peso2))/(peso1+peso2);
    printf("A sua media das duas provas e: %f", media);

    return 0;
}
