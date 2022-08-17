#include<stdio.h>
int main()
{
    int a;
    int position=0;
    int max=0;
    for(int i=1 ; i<=100; i++)
    {
        scanf("%d",&a);
        if(max<a)
        {
            max=a;
            position = i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",position);
    return 0;
}