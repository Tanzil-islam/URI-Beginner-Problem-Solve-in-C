#include<stdio.h>
int main()
{
    int x,z,a=1,c=0;

    scanf("%d%d",&x,&z);
    while(z<=x)
    {
        scanf("%d",&z);
    }

    for(int i=x ;i<=z ;i++)
    {
        c=c+i;
        if(c>z)
        {
            break;
        }
        a++;
    }

    printf("%d\n",a);

    return 0;
}
