#include<stdio.h>
int main()
{
    double a,sum,sum1,sum2,sum3,sum4,sal,sal1,sal2,sal3,sal4;
    scanf("%lf",&a);
    if(a>=0 && a<=400)
    {
        sal =( a * 0.15);
        sum=(a + sal);
        printf("Novo salario: %.2lf\n",sum);
        printf("Reajuste ganho: %.2lf\n",sal);
        printf("Em percentual: 15 %\n");
    }
    else if(a>=400.01 && a<=800)
    {
        sal1= a*(0.12);
        sum1=a+sal1;
        printf("Novo salario: %.2lf\n",sum1);
        printf("Reajuste ganho: %.2lf\n",sal1);
        printf("Em percentual: 12 %\n");
    }
    else if(a>=800.01 && a<=1200)
    {
        sal2= a*(0.1);
        sum2=a+sal2;
        printf("Novo salario: %.2lf\n",sum2);
        printf("Reajuste ganho: %.2lf\n",sal2);
        printf("Em percentual: 10 %\n");
    }
    else if(a>=1200.01 && a<=2000)
    {
        sal3= a*(0.07);
        sum3=a+sal3;
        printf("Novo salario: %.2lf\n",sum3);
        printf("Reajuste ganho: %.2lf\n",sal3);
        printf("Em percentual: 7 %\n");
    }
    else if(a>2000)
    {
        sal4= a*(0.04);
        sum4=a+sal4;
        printf("Novo salario: %.2lf\n",sum4);
        printf("Reajuste ganho: %.2lf\n",sal4);
        printf("Em percentual: 4 %\n");
    }
    return 0;
}
