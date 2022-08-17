#include<stdio.h>
int main()
{
    double a,b,c,area,parameter;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c || b+c>a || a+c>b)
    {
        parameter=a+b+c;
        printf("Perimetro = %.1lf\n",parameter);
    }
    else
    {
        area= (0.5*(a+b)*c);
        printf("Area = %.1lf\n",area);

    }
    return 0;

}
