#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int x=0,y,auX=0,auY=0,perimetro,px=0,py=0,cont=0;
    while(x!=-999)
    {
        printf("Digite o valor de X: ");
        scanf("%d",&x);
        if(x!= -999)
        {
            printf("Digite o valor de Y: ");
            scanf("%d",&y);
            auX=x;
            auY=y;
            perimetro=perimetro+(x-auX)+(y-auY);
            if(cont==0)
            {
                px=x;
                py=y;
                cont++;
            }
        }
    }
    perimetro=perimetro+ (px-x)+(py-y);
    printf("%d",perimetro);
}
