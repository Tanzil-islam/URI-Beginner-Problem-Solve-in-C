#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,e,f,g;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=((b*b)-4*a*c);

    if(d>=0 && a!=0){
    g=sqrt(d);
    e=((-b+g)/(2*a));
    f=((-b-g)/(2*a));
    printf("R1 = %.5lf\nR2 = %.5lf\n",e,f);

    }
    else {
    printf("Impossivel calcular\n");
    }
    return 0;
}
