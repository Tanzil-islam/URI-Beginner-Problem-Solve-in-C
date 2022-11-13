#include<stdio.h>
int main()
{
    int n,a[n],b,min;

    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[0];

    for(int i=1 ; i<n ; i++)
    {
        if(min>a[i])
        {
            min=a[i];
            b=i;
        }
    }

    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",b);

}
