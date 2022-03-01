#include <stdio.h>
#include <stdlib.h>

int main()
{
    float porc_a = 4, porc_b = 1.3;
    int popa = 80000, popb = 200000, anos = 0;

    do
    {
        popa += popa * (porc_a / 100);
        popb += popb * (porc_b / 100);
        anos++;

        printf(" Populacao A: %.1d\n", popa);
        printf(" Populacao B: %.1d\n", popb);
    } while (popa <= popb);
    printf(" Populacao A alcancou a B em: %d anos\n", anos);
}