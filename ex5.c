#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a,b,Mna,Mnb,div,n1=1,n2=1;
    printf("Informe dois numeros:");
    scanf("%d %d",&a,&b);
    Mna=a,Mnb=b;
    do
    {
        if(Mna<Mnb)
        {
            n1+=1;
            Mna=n1*a;
        }
        else
        {
            n2+=1;
            Mnb=n2*b;
        }
    }while(Mna!=Mnb);

    printf("%d",Mna);
}
