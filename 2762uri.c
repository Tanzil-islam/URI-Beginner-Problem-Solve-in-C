#include<stdio.h>
int main()
{
   float a,b;
   int c,n,d=0;
   scanf("%f",&a);

   b= a-(int)(a);

   if(b>=0.10 && b<0.100)
   {
       c=b*10;
       printf("%d.%d\n",c,(int)a);
   }





}

