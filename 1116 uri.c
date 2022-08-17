#include<stdio.h>
int main()
{
    int a;
    double x,y,div;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%lf %lf",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else{
        div=x/y;
        printf("%.1lf\n",div);
        }
    }
    return 0;
}
