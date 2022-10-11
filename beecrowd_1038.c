#include <stdio.h>
 
int main() {
 
   int cod,quant;
   double preco;
   
   scanf("%d%d",&cod,&quant);
   if (cod == 1 ){
       preco = 4.00 * quant;
       printf("Total: R$ %.2lf\n",preco);
   }else
    if (cod == 2 ){
       preco = 4.50 * quant;
       printf("Total: R$ %.2lf\n",preco);
   }else
    if (cod == 3 ){
       preco = 5.00 * quant;
       printf("Total: R$ %.2lf\n",preco);
   }else
    if (cod == 4 ){
       preco = 2.00 * quant;
       printf("Total: R$ %.2lf\n",preco);
   }else
    if (cod == 5 ){
       preco = 1.50 * quant;
       printf("Total: R$ %.2lf\n",preco);
   }
    return 0;
}
