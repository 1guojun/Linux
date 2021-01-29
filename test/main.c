#include"cal.h"

int main()
{
  while(1)
  {
    int x,y;
    printf("Please# ");
    scanf("%d %d",&x,&y);
    int rt=MyAdd(x,y);
    printf("%d+%d=%d\n",x,y,rt);
  }
}
