#include <stdio.h>
int main()
{
    int i,n;
    int not[] = {100,50,20,10,5,2,1};
    scanf("%d",&n);
    for(i = 0;i < 7;i++){
        printf("%d nota(s) de R$ %d,00\n",(n/not[i]),not[i]);
        n = n%not[i];
    }
    return 0;
}
//alternate

/*#include <stdio.h>

int main()
{
    int Amount;
    int Note100, Note50, Note20, Note10, Note5, Note2, Note1;

	Note100 = Note50 = Note20 = Note10 = Note5 = Note2 = Note1 = 0;

    scanf("%d", &Amount);
	printf("%d\n",Amount);

    if(Amount >= 100)
    {
        Note100 = Amount/100;
        Amount -= Note100 * 100;
    }
    if(Amount >= 50)
    {
        Note50 = Amount/50;
        Amount -= Note50 * 50;
    }
    if(Amount >= 20)
    {
        Note20 = Amount/20;
        Amount -= Note20 * 20;
    }
    if(Amount >= 10)
    {
        Note10 = Amount/10;
        Amount -= Note10 * 10;
    }
if(Amount >= 5)
    {
        Note5 = Amount/5;
        Amount -= Note5 * 5;
    }
    if(Amount >= 2)
    {
        Note2 = Amount /2;
        Amount -= Note2 * 2;
    }
    if(Amount >= 1)
    {
        Note1 = Amount;
    }
    printf("%d nota(s) de R$ 100,00\n", Note100);
    printf("%d nota(s) de R$ 50,00\n", Note50);
    printf("%d nota(s) de R$ 20,00\n", Note20);
    printf("%d nota(s) de R$ 10,00\n", Note10);
    printf("%d nota(s) de R$ 5,00\n", Note5);
    printf("%d nota(s) de R$ 2,00\n", Note2);
    printf("%d nota(s) de R$ 1,00\n", Note1);

    return 0;
}
*/
