#include <stdio.h>

int main()
{
    float grauF, grauC;
    printf("Ola! Diga quantos graus faz em sua cidade... Em graus Fahrenheit!");
    scanf("%f", &grauF);
    grauC = ((grauF-32)*5)/9;
    printf("Na sua cidade faz %f graus celsius!", grauC);

    return 0;
}
