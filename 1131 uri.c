#include<stdio.h>
int main()
{
    int a,in,gr,inw=0,grw=0,draw=0,mp=1;

    loop:
        {
          scanf("%d%d",&in,&gr);
          if(in>gr)
          {
            inw++;

          }
          if(in<gr)
          {
            grw++;

          }
          if(in==gr)
          {
            draw++;

          }
          printf("Novo grenal (1-sim 2-nao)\n");
          scanf("%d",&a);
          do{
          if(a==1)
          {
              mp++;
              goto loop;
          }

        }while(a!=2);
          }

        printf("%d grenais\n",mp);
        printf("Inter:%d\n",inw);
        printf("Gremio:%d\n",grw);
        printf("Empates:%d\n",draw);


         if(inw>grw)
         {
             printf("Inter venceu mais\n");
         }
         if(inw<grw)
         {
             printf("Gremio venceu mais\n");
         }
         if(inw==grw)
         {
             printf("Não houve vencedor\n");
         }




}
