#include<stdio.h>
int main()
{
    int x[10];

    for(int i=0 ; i<=9 ; i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0 ; i<=9 ; i++)
    {



        if(x[i]==0 || x[i]<0)
        {
            printf("X[%d] = 1\n",i);
        }
        else
        {
           printf("X[%d] = %d\n",i,x[i]);
        }

    }

    return 0;
}
