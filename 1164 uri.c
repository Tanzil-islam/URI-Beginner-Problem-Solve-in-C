#include<stdio.h>
int main()
{
    int a,x,sum;
    scanf("%d",&a);

    for(int i=0 ; i<a ; i++)
    {
        sum=0;
        scanf("%d",&x);
        for(int j=1 ; j<=x/2 ; j++)
        {
            if(x%j==0)
            {
                sum=sum+j;
            }
        }
    if(sum==x)
    {
        printf("%d eh perfeito\n",x);
    }
    else
    {
        printf("%d nao eh perfeito\n",x);
    }

    }

    return 0;


}
