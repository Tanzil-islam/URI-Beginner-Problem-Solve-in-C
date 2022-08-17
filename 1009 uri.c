#include<stdio.h>
int main()
{
    char ch[10];
    double a,b,sum,t;
    scanf("%s %lf %lf",ch,&a,&b);
    sum=(b*15)/100.00;
    t=sum+a;
    printf("TOTAL = R$ %.2lf\n",t);
    return 0;


}

