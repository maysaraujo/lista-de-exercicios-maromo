#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, me, ma;

    for (int i = 0; i < 5; i++)
    {
        printf(" Insira a primeira nota: ");
        scanf("%f", &n1);
        printf(" Insira a segunda nota: ");
        scanf("%f", &n2);
        printf(" Insira a terceira nota: ");
        scanf("%f", &n3);

        ma = (n1 + n2 + n3) / 3;
        printf(" Media: %.2f\n", ma);
        printf(" Media de Aproveitamento: %.2f%%\n", (n1 + n2 * 2 + n3 * 3 + ma));
    }
}
