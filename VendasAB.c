#include <stdio.h>

int istrue(char *s)
{
    int c;
    c = 0;
    while (c <= 0)
    {
        printf("%s", s);
        scanf("%d", &c);
    }
    return (c);
}


int main()
{
    int nrvendasA;
    int nrvendasB;
    float result;
    printf("Insira o numero de vendas de A:\n");
    scanf("%d", &nrvendasA);
    if (nrvendasA < 0)
        nrvendasA = istrue("insira valor positivo\n");
    printf("Insira o numero de vendas de B:\n");
    scanf("%d", &nrvendasB);
    if (nrvendasB < 0)
        nrvendasB = istrue("insira valor positivo\n");
    result = (nrvendasA * 0.5) + (nrvendasB * 0.75);
    if (nrvendasA > nrvendasB)
    {
        printf("%f", result - (result * 0.25) + 500);
    }
    if (nrvendasA < nrvendasB)
    {
        printf("%f", result - (result * 0.25));
    }
}

