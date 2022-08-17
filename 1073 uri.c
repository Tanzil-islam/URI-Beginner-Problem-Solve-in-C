#include<stdio.h>
int main()
{
    int a,sum;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            sum=i*i;
             printf("%d^2 = %d\n",i,sum);
        }

    }
    return 0;
}
