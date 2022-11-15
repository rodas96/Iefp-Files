#include <stdio.h>

float istrue(char *s)
{
    float c;
    c = 0;
    while (c <= 0)
    {
        printf("%s", s);
        scanf("%f", &c);
    }
    return (c);
}


int main()
{
    float   km;
    float   mp;
    float   knots;
    char    escolha;
   printf("Escolha uma opçao:\na.km/h\nb.mp/h\nc.knots\n");
   escolha = getchar();
    if(escolha == 'a')
    {
        printf("inserir valor em km:");
        scanf("%f", &km);
        if (km <= 0)
        km = istrue("insira uma distancia positiva\n");
        printf("Velocidade por hora em milhas\n");
        printf("%f\n", (km * 0.62));
        printf("Velocidade em Knots\n");
        printf("%f\n", (km * 0.54));
    }
    else if(escolha == 'b')
    {
        printf("inserir valor em mp:");
        scanf("%f", &mp);
        if (mp <= 0)
        mp = istrue("insira uma distancia positiva\n");
        printf("Velocidade por hora em kms\n");
        printf("%f\n", (mp * 1.61));
        printf("Velocidade em Knots\n");
        printf("%f\n", (mp * 0.87));
    }
    else if(escolha == 'c')
    {
        printf("inserir valor em knots:");
        scanf("%f", &knots);
        if (knots <= 0)
        knots = istrue("insira uma distancia positiva\n");
        printf("Velocidade por hora em milhas\n");
        printf("%f\n", (knots * 1.15));
        printf("Velocidade por hora em kms\n");
        printf("%f\n", (knots * 1.85));
    }
    else
        printf("ERROR");
}



