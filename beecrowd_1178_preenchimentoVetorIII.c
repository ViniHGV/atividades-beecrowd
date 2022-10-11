#include <stdio.h>

int main ()
{
  int i=0;
  double x[100],y;

  scanf("%lf", &y);
  x[i] = y;
  i=1;
  
  while (i<100){
    y=y/2;
    x[i]=y;
    i++;
  }
  
  for (i=0;i<100;i++){
    printf("N[%d] = %.4lf\n",i,x[i]);
  }
  
  return 0;
}
