#include<stdio.h>
int main()
{
    int n,a=1,b=1,c=1,d=2;
    scanf("%d",&n);
    printf("%d %d %d\n",a,b,c);
    for(int i=1 ; i<n ;i++)
    {

        printf("%d %d %d\n",d,d*d,d*d*d);
        d++;
    }
    return 0;
}
