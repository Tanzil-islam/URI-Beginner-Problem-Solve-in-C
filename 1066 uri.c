#include<stdio.h>
int main()
{
    int x[4];
    int count=0;
    int c=0;
    int d=0;
    int e=0;

    for(int i=0;i<=4;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=0 ; j<=4 ;j++)
    {
        if(x[j]%2==0)
        {
            count=count+1;
        }
    }
    printf("%d valor(es) par(es)\n",count);
        for(int k=0 ; k<=4 ;k++)
    {
        if(x[k]%2!=0)
        {
            c=c+1;
        }
    }
    printf("%d valor(es) impar(es)\n",c);
            for(int l=0 ; l<=4 ;l++)
    {
        if(x[l]>0)
        {
            d=d+1;
        }
    }
    printf("%d valor(es) positivo(s)\n",d);
     for(int m=0 ; m<=4 ;m++)
    {
        if(x[m]<0)
        {
            e=e+1;
        }
    }
    printf("%d valor(es) negativo(s)\n",e);
    return 0;
}
