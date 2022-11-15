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

float   valorPagar()
{
    float   consumo;
    float   valorCiva;
    float   valorSiva;
    printf("insira o consumo:\n");
    scanf("%f", &consumo);
    if (consumo < 0)
    consumo = istrue("insira falor positivo:\n");
    valorSiva = 5.42 + consumo * 0.16;
    valorCiva = valorSiva * 1.23;
    printf("Valor a pagar com iva:\n");
    printf("%f\n", valorCiva);
}

float   Gigabytes()
{
    float   gigaBytes;
    int disquete;
    int cd;
    int dvd;
    printf("insira uma medida em Gigabytes:\n");
    scanf("%f", &gigaBytes);
    if (gigaBytes < 0)
    gigaBytes = istrue("insira valor positivo");
    printf("precisa destas disquetes:\n");
    printf("%f\n", gigaBytes / 0.00140625);
    printf("precisas destes cds:\n");
    printf("%f\n", gigaBytes / 0.7);
    printf("precisas destes dvds:\n");
    printf("%f\n", gigaBytes / 4.7);
}
int main()
{
    while(1)
    {
        char c;
        
        printf("Insira uma opção:\n");
        printf("1 - Testa o programa valor a pagar\n");
        printf("2 - Testa o programa gigabytes\n");
        printf("0 - sair do programa\n");
        scanf("%c", &c);
        switch (c)
        {
            case '1':
                valorPagar();
                break ;
            case '2':
                Gigabytes();
                break ;
            case '0':
                return (0);
            default: printf("error\n");
        }
        while (c != '\n')
            scanf("%c", &c);
    }
}

