#include <stdio.h>

int main()
{
    int anos, dias, meses, minutos, horas;
    printf("Informe sua idade: \n");
    scanf("%d", &anos);
    dias = anos * 365;
    meses = anos * 12;
    horas = anos * 8760;
    minutos = anos * 525600;
    printf("Sua idade em minutos e: %d, em horas e: %d, em dias e: %d e em meses e: %d", minutos, horas, dias, meses);

    return 0;
}
