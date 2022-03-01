#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fat = 1;

    printf(" Insira um numero inteiro: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--)
    {
        fat *= i;
    }
    printf(" %d!\n", fat);
}