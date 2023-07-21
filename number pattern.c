#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
  int i,j,k;
  for (i=1;i<=7;i++)
  {
    for(k=i;k>1;k--)
      printf("%d ",k);
    for(j=1;j<=8-i;j++)
      printf("%d ",j);
    printf("\n");
  }
  return 0;
}
