#include <stdio.h>


int main(void)
{
    int digito,total=0,valor,aux,resto;
    printf("Informe o digito: ");
    scanf("%d",&digito);
    do
    {
        printf("Informe o valor: ");
        scanf("%d",&valor);
        aux=valor;
        if(valor>0)
        {
            do
            {
                resto=valor%10;
                if(resto==digito)total++;
                valor=(valor-resto)/10;
            }while(valor>0);

            printf("%d - possui %d digitos %d \n",aux,total,digito);
            total=0;
        }

    }while(aux>0);
}
