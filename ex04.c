#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma = 0, count = 0, qtd = 0;

    do
    {
        printf(" Insira um numero (inteiro e positivo): ");
        scanf("%d", &num);
        printf(" Insira a quantidade de divisores exatos: ");
        scanf("%d", &qtd);

        if (num < 0 && qtd < 0)
        {
            printf(" Insira numeros positivos\n");
        }

        for (int i = 1; count < qtd; i++)
        {
            if (num % i == 0)
            {
                printf(" %d\n", i);
                count++;
                soma += i;
            }
        }
        printf(" Soma: %d\n", soma);

    } while (num < 0 && qtd < 0);
}