#include<stdio.h>
int main()
{
    double sum=1;
    for(double i=2 ; i<=100 ;i++)
    {
       sum=sum+(1/i);
    }
     printf("%.2lf\n",sum);

     return 0;
}
