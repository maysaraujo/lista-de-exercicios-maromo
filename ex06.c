#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    do
    {
        printf(" Insira um numero impar: ");
        scanf("%d", &num);
    } while (num % 2 == 0);
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j <= num; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}
