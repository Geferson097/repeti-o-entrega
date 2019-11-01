#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a=0,b=1,aux,i,n;
    printf("Digite um número: ");
    scanf("%d",&n);
    if(n>=0)printf("%d\t",a);
    if(n>=1)printf("%d\t",b);
    for(i=2;i<n;i++)
    {
        aux=a+b;
        a=b;
        b=aux;
        printf("%d\t",aux);
    }
}
