#include <stdio.h>
#include <stdlib.h>

int main()
{
  float tempo, melhort, qtdvoltas, tempom = 0, voltamelhort;

  printf("Insira a quantidade de voltas ocorridas:");
  scanf("%f", &qtdvoltas);

  for (int i = 1; i <= qtdvoltas; i++)
  {
    printf("Insira o tempo da volta %d em minutos:", i);
    scanf("%f", &tempo);

    if (i == 1)
    {
      melhort = tempo;
      voltamelhort = i;
    }
    else if (tempo < melhort)
    {
      melhort = tempo;
      voltamelhort = i;
    }
  }
  printf("Melhor Tempo: %.0f Minutos\n", melhort);
  printf("Volta do Melhor Tempo: %.0f\n", voltamelhort);
  printf("Tempo Medio das %.0f Voltas: %.0f Minutos\n", qtdvoltas, tempo / qtdvoltas);
}
