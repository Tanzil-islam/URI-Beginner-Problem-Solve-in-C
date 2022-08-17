#include<stdio.h>
int main()
{
    int x,y;
     double sum,sum1,sum2,sum3,sum4;
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        scanf("%d",&y);
         sum = y*4;
        printf("Total: R$ %.2lf\n",sum);
        break;
    case 2:
        scanf("%d",&y);
         sum1 = y*4.50;
        printf("Total: R$ %.2lf\n",sum1);
        break;
    case 3:
        scanf("%d",&y);
         sum2 = y*5;
        printf("Total: R$ %.2lf\n",sum2);
        break;
    case 4:
        scanf("%d",&y);
         sum3 = y*2;
        printf("Total: R$ %.2lf\n",sum3);
        break;
    case 5:
        scanf("%d",&y);
         sum4 = y*1.50;
        printf("Total: R$ %.2lf\n",sum4);
        break;
    }
    return 0;
}
