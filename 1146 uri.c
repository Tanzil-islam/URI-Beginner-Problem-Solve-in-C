#include<stdio.h>
int main()
{
    int a;

    while(1)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        else
        {
            printf("1");
            for(int i=2 ; i<=a;i++)
            {
                printf(" %d",i);
            }
            printf("\n");
        }
    }
    return 0;
}
