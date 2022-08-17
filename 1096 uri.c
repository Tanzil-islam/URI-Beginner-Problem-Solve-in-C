#include<stdio.h>
int main()
{
    int a,b,x,sum=0;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        scanf("%d %d",&a,&b);

        if(a<b)
        {
            for(int j=(a+1) ; j<b ;j++)
            {
                if(j%2 !=0)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
        else if(b<a)
            {
            for(int k=b+1 ; k<a ;k++)
            {
                if(k%2 !=0)
                {
                    sum=sum+k;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
        else
            printf("%d\n",sum);
    }
    return 0;
}
