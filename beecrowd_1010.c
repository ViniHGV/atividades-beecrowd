#include <stdio.h>
 
int main() {
 
    int nPec=0,nPec2=0,nP=0,nP2=0;
    double valor=0,value=0,tot=0;
  
    scanf("%d%d%lf",&nPec,&nPec2,&valor);
    scanf("%d%d%lf",&nP,&nP2,&value);
    tot = (valor*nPec2)+(value*nP2);
    printf("VALOR A PAGAR: R$ %.2lf\n",tot);
  
    return 0;
}
