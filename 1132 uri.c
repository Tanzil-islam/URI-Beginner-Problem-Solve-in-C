#include<stdio.h>
int main()
{
    int a,b,sum=0,t;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
       t=a;
       a=b;
       b=t;
    }

    for(int i=a ;i<=b; i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }

    }
    printf("%d\n",sum);

    return 0;
}
