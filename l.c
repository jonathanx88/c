#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void Aprovado(float media)
{
    if (media >= 7)
    {
        printf("aprovado");
    }
    else
    {
        printf("reprovado");
    }
}
int main()
{
    setlocale(LC_ALL, "portuguse");
    float nota[3], media, SomaNotas;
    int i;

    for (i = 0; i < 3; i++)
    {
        do
        {
            printf("digite sua %dª nota \n", i + 1);
            scanf("%f", &nota[i]);

        } while ((nota[i] > 10) || (nota[i] < 0));
        SomaNotas += nota[i];
    }
    media = SomaNotas / 3;
    printf("media: %2.f\n", media);

    Aprovado(media);

    return 0;
}