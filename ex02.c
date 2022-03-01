#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dupli, juros = 0.03;
    float qt = 9, dias;

    for (int i = 0; i < qt; i++)
    {
        printf(" Insira o valor da duplicata: ");
        scanf("%f", &dupli);
        printf(" Insira os dias de atraso: ");
        scanf("%f", &dias);
        printf(" Juros a ser pago: %.2f\n", ((dupli * juros) / 100) * dias);
    }
}