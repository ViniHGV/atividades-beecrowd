#include <stdio.h>
 
int main() {
 
    char nomeVend[50];
    double salFixo=0,totVendas=0,total=0;
  
    scanf("%s",&nomeVend);
    scanf("%lf",&salFixo);
    scanf("%lf",&totVendas);
    totVendas= totVendas * 0.15;
    total = salFixo + totVendas;
    printf ("TOTAL = R$ %.2lf\n",total);
  
    return 0;
}
