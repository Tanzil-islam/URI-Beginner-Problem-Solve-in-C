#include<stdio.h>
int main()
{
    int a,n[10];
    scanf("%d",&a);
        printf("N[0] = %d\n",a);

    n[0]=a;
    for(int i=1 ; i<=9 ; i++)
    {
        a=a*2;
        n[i]=a;
    }

    for(int i=1 ; i<=9 ; i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;

}
