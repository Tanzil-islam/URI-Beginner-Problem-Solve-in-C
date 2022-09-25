#include<stdio.h>
int main()
{
    int a,x,y,sum;
    scanf("%d",&a);

    for(int i=1; i<=a; i++)
    {
         sum=0;
        scanf("%d %d",&x,&y);

        for(int j=1 ; j<y ;j++)
        {
           x=x+1;
           if(x%2!=0)
           {
               sum=sum+x;
           }
        }
        printf("%d\n",sum);


    }


}
