#include<stdio.h>
int main()
{
    int count=0,c=0;
    double a,avg,sum=0;

    while(1)
    {
        scanf("%lf",&a);
        if(a>0 && a<=10)
        {
            sum=sum+a;
            count++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(count>1)
        {
            break;
        }
    }
    avg=sum/2;
    printf("media = %.2lf\n",avg);

    return 0;
}
