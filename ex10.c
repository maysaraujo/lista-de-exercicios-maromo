#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, palpite;

    srand(time(NULL));
    numero = rand() % 1000;

    do
    {
        printf(" Tente acertar o numero magico!!!: ");
        scanf("%d", &palpite);

        if (palpite == numero)
        {
            printf(" Parabens, ate que enfim voce acertou!!!. O numero era: %d\n", numero);
        }
        else if (palpite < numero)
        {
            printf(" Errou!!!, chute mais alto\n");
        }
        else
        {
            printf(" Errou!!!, chute mais baixo\n");
        }

    } while (palpite != numero);
}