#include<stdio.h>
int main()
{
    int a,b;
    int count=0,c=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b>=10 && b<=20)
        {
            count=count+1;
        }
        else{
            c+=1;
        }
    }
    printf("%d in\n",count);
    printf("%d out\n",c);
    return 0;
}
