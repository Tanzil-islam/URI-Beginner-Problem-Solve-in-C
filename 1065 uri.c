#include<stdio.h>
int main()
{
    int a,c=0;
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            c++;
        }
    }
    printf("%d valores pares",c);
    return 0;
}
