#include <stdio.h>

int main()
{
 int hr,mn,cs;
 scanf("%d",&cs);

  hr= cs/3600;
  cs= cs- (hr*3600);
  mn= cs/60;
  cs=cs- (mn*60);
  printf("%d:%d:%d\n",hr,mn,cs);

 return 0;
}

