#include<stdio.h>
int main()
{
  double a[100];

   for(int i =0 ; i<=99 ; i++)
   {
       scanf("%lf",&a[i]);
   }

    for(int i =0 ; i<=99 ; i++)
   {
       if(a[i]<10 || a[i]==10 )
       {
           printf("A[%d] = %0.1lf\n",i,a[i]);
       }
   }
   return 0;
}
