#include<stdio.h>
int main()
{
    char b[15];

    gets(b);

    printf("%c%c%c\n",b[0],b[1],b[2]);
     printf("%c%c%c\n",b[4],b[5],b[6]);
      printf("%c%c%c\n",b[8],b[9],b[10]);
       printf("%c%c\n",b[12],b[13]);
}
