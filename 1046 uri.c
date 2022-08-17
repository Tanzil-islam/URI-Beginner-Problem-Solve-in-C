#include<stdio.h>
int main()
{
    int a , b , sum;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        int sub= 24-a;
        int sum= sub+b;
        printf("O JOGO DUROU %d HORA(S)\n",sum);
    }
    else if(b>a)
    {
        int sub1= b-a;

        printf("O JOGO DUROU %d HORA(S)\n",sub1);
    }
    else if(b==a)
    {

        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;

}
