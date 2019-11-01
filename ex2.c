#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int RA=0,aux=0;
    float nota,maiorN=0;
    while(RA!= -1)
    {
        printf("informe o RA: ");
        scanf("%d",&RA);
        if(RA!=-1)
        {
            printf("Informe a media:");
            scanf("%f",&nota);
            if(nota>=7)
            {
                if(maiorN<nota)
                {
                    maiorN=nota;
                    aux=RA;
                }
            }
        }
    }
    if(maiorN>0)printf("A maior media eh %.2f do RA: %d",maiorN,aux);
    else printf("Nota minima nao atingida");
}

