#include <stdio.h>
 
int main() {

  int cont=0, X=0, Y=0, arm=0, soma=0;
  scanf("%d%d",&X,&Y);
  
  if(X>Y){
    arm=X;
    X=Y;
    Y=arm;
  }
  cont=X+1;
  while(cont<Y){
    if(cont%2!=0)
      soma+=cont;
      cont++;
  }
  printf("%d\n",soma);
  return 0;
}
