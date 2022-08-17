#include<stdio.h>
int main()
{
    int a,x,c=0, r=0,f=0,t;
    char ch;
    double cp,rp,fp;
    scanf("%d",&a);
    for(int i =0 ;i<a;i++)
    {
        scanf("%d %c",&x,&ch);

        if(ch=='C')
        {
            c=c+x;
        }
        if(ch=='R')
        {
            r=r+x;
        }
        if(ch=='S')
        {
            f=f+x;
        }
    }
    t=(c+r+f);

    cp=(c*100.00)/t;
     rp=(r*100.00)/t;
      fp=(f*100.00)/t;

    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",f);
    printf("Percentual de coelhos: %0.2lf %%\n",cp);
    printf("Percentual de ratos: %0.2lf %%\n",rp);
    printf("Percentual de sapos: %0.2lf %%\n",fp);
    return 0;
}
