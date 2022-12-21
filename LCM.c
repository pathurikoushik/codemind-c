#include <stdio.h>
int main() {
  int x,y,LCM;
  scanf("%d %d",&x,&y);
  LCM=(x>y)?x:y;
  while (1)
    {
      if (LCM%x==0&&LCM%y==0)
      {
          printf("%d",LCM);
          break;
      }
      LCM++;
  }
  return 0;
}