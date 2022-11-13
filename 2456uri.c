#include<stdio.h>
int main()
{
    int card[5];
    int c=0,c1=0,c2=0;

    for(int i=0; i<5 ;i++)
    {
        scanf("%d",&card[i]);
    }
    for(int i=1 ; i<4; i++)
    {
        if(card[i]<card[i+1]&&card[i-1]<card[i])
        {
            c++;
        }

        else if(card[i]>card[i+1]&&card[i-1]>card[i])
        {
            c1++;
        }
        else
        {
            c2=3;
            break;
        }


        }
        if(c==3)
            printf("C\n");
        else if(c1==3)
            printf("D\n");
        else if(c2==3){
          printf("N\n");
        }

    }

