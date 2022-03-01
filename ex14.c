#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf(" Insira o valor de a: ");
    scanf("%f", &a);
    printf(" Insira o valor de b: ");
    scanf("%f", &b);
    printf(" Insira o valor de c: ");
    scanf("%f", &c);

    if (a == b && b == c)
    {
        printf(" Triangulo Equilatero\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf(" Triangulo Isosceles\n");
    }
    else
    {
        printf(" Triangulo Escaleno\n");
    }
}