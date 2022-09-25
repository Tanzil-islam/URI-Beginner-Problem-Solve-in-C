#include<stdio.h>
int main()
{
    int n[1000],a,k,i;
    scanf("%d",&a);
    for(k=0, i=0; k<1000; k++)
    {
        printf("N[%d] = %d\n",k,i);
        i++;
        if(i==a)
            i=0;
    }
    return 0;
}
