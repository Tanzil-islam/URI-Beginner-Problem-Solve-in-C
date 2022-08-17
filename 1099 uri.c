#include<stdio.h>
int main()
{
    int a;
    int x,y;
    int sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d%d",&x,&y);
        for(int j=x+1 ; j<y ; j++)
        {
            if(j%2 !=0)
            {
                sum=sum+j;
            }
        }
        printf("%d",sum);
    }
}
