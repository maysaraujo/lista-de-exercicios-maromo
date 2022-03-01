#include <stdio.h>
#include <stdlib.h>

int main()
{
  int impar = 0, par = 0, num;

  while (impar != 10 && par <= 500)
  {

    do
    {
      printf("Insira um valor inteiro (menor que 100): ");
      scanf("%d", &num);

      if (num >= 100)
      {
        printf("Insira um numero menor que 100\n");
      }

    } while (num >= 100);

    if (num % 2 == 0)
    {
      par += num;
    }
    else
    {
      impar++;
    }
  }

  printf("Soma dos Pares: %d\n", par);
  printf("Quantidade de Impares: %d\n", impar);
}