#include <stdio.h>
#include <stdlib.h>

int main(){

float n1,n2,n3,media;
char nome[100];
int idade;





printf("digite seu nome \n");
gets(nome);

printf("digite sua idade \n");
scanf("%d", &idade);

printf("digite sua primeira nota \n");
scanf("%f", &n1);

printf("digite sua segunda  nota \n");
scanf("%f", &n2);

printf("digite sua terceira nota \n");
scanf("%f", &n3);

media = (n1+n2+n3) /3;

if(media >7){ 

printf("aprovado");
}
else
{
printf("reprovado");
}


printf("media: %f \n ", media);

return 0;
}
