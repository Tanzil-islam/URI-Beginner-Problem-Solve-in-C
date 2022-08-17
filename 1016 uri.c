#include<stdio.h>
int main()
{
    int a;
    int sec=0,hrs=0,min=0;
    scanf("%d",&a);

    hrs= a/365;
    a=a%365;
    min=a/30;
    sec=a%30;
    printf("%d ano(s)\n",hrs);
    printf("%d mes(es)\n",min);
    printf("%d dia(s)\n",sec);


    return 0;


}
