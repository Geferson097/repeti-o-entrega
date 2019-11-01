#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,num,aux=0,velo,mvel=0;
    printf("Informe o numero de lesmas:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("informe a velocidade da lesma %d:",i);
        scanf("%d",&velo);
        if(mvel<velo)
        {
            mvel=velo;
            aux=i;
        }

    }
    if(mvel<10)printf("A lesma mais veloz é %d com %d cm/h e esta no nivel 1",aux,mvel);
    else if(mvel>10 && mvel<20)printf("A lesma mais veloz é %d com %d cm/h e esta no nivel 2",aux,mvel);
    else printf("A lesma mais veloz é %d com %d cm/h e esta no nivel 3",aux,mvel);
}
