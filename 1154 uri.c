#include<stdio.h>
int main()
{
    double a,c=0,sum=0;
    while(1)
    {
        scanf("%lf",&a);

        if(a<0)
        {
            break;
        }
        if(a>0)
        {
           sum=sum+a;
           c++;
        }
    }

    printf("%.2lf",sum/c);
    return 0;
}
