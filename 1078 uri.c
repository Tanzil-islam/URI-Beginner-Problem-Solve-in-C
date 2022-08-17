#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1 ; i<=10;i++)
    {
        int mul= i*a;
        printf("%d x %d = %d\n",i,a,mul);
    }
    return 0;
}
