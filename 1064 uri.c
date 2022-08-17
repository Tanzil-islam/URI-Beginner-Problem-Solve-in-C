#include<stdio.h>
int main()
{
    double a,b=0,d,e,f,c=0;


    for(int i=1;i<=6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            b=b+a;
            c++;
        }
    }
    d=b/c;
    printf("%.0lf valores positivos\n",c);
    printf("%.1lf\n",d);
    return 0;

}
