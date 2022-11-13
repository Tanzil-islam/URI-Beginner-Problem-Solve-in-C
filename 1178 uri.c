#include<stdio.h>
int main()
{
    double a,n[100];
    scanf("%lf",&a);

    printf("N[0] = %.4lf\n",a);

    for(int i=1 ; i<=99 ; i++ )
    {
        a=a/2;
        printf("N[%d] = %.4lf\n",i,a);

    }
    return 0;
}
