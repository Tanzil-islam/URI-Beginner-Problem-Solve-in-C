#include<stdio.h>
int main()
{
    double i,j=2,s=1;
    for(i =3 ; i<=39 ; i++)
    {
        s=s+i/j;
        i++;
        j=j*2;
    }
    printf("%.2lf\n",s);
    return 0;

}
