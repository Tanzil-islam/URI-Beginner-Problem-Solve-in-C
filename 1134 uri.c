#include<stdio.h>
int main()
{
    int a=0,d=0,g=0,x;
    printf("MUITO OBRIGADO\n");

    while(1)
    {
        scanf("%d",&x);

        if(x>=1 && x<4)
        {
            if(x==1)
            {
                a++;
            }
            else if(x==2)
            {
                g++;
            }
            else if(x==3)
            {
                d++;
            }
        }

        else if(x==4)
        {
            break;
        }
    }

    printf("Alcool: %d\n",a);
        printf("Gasolina: %d\n",g);

                printf("Diesel: %d\n",d);


                return 0;
}
