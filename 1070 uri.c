#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int sum=x+11;
    for(int i=x;i<=sum;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
