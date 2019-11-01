#include<stdio.h>

int main()
{
    int num,espacos,asteriscos,count,linha;
    printf("Insira um numero:");
    scanf("%d",&num);
    asteriscos=1;
    espacos=3*(num/2);
    for(linha=1;espacos>0;linha++)
    {
        for(count=1;count<=espacos;count++)printf(" ");
        for(count=1;count<=asteriscos;count++)printf("*");
        espacos--;
        asteriscos+=2;
        printf("\n");
    }
    for(linha=1;asteriscos>0;linha++)
    {
        for(count=1;count<=espacos;count++)printf(" ");
        for(count=1;count<=asteriscos;count++)printf("*");
        espacos++;
        asteriscos-=2;
        printf("\n");
    }
}
