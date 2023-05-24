#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;

    printf("digite a nota 1 :");
    scanf("%f", &nota1);

    printf("digite a nota 2");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

            if (media >= 6)
    {
        printf("aprovado");
    }
    else if (media <= 4)
    {
        printf("recuperacao");
    } else {
         printf("reprovado");
    }

    return 0;
}
