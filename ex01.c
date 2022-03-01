#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float areaTri, areaCir, areaPara, base, altura, raio;
    char opc;
    float pi = 3.1415;

    do
    {
        printf(" \t\t\t a) Calculo da Area do Triangulo");
        printf(" \n\t\t\t b) Calculo da Area do Circulo");
        printf(" \n\t\t\t c) Calculo da area do Paralelogramo");
        printf(" \n\t\t\t d) SAIR");
        printf("\n\t\t\t Escolha uma opcao: ");
        scanf(" %c", &opc);

        switch (opc)
        {
        case 'a':
            printf(" Insira a base: ");
            scanf("%f", &base);
            printf(" Insira a altura: ");
            scanf("%f", &altura);
            areaTri = (base * altura) / 2;
            printf(" Area do Triangulo: %.2f\n", areaTri);
            break;

        case 'b':
            printf(" Insira o raio: ");
            scanf("%f", &raio);
            areaCir = pi * (raio * raio);
            printf(" Area do Circulo: %.2f\n", areaCir);
            break;

        case 'c':
            printf(" Insira a base: ");
            scanf("%f", &base);
            printf(" Insira a altura: ");
            scanf("%f", &altura);
            areaPara = base * altura;
            printf(" Area do Paralelogramo: %.2f\n", areaPara);
            break;

        case 'd':
            printf(" Saindo...\n");
            break;

        default:
            printf(" Opcao inexistente\n");
        }
    } while (opc != 'd');
}
