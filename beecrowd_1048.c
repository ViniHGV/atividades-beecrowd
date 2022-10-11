#include <stdio.h>
 
int main() {
 
    double salF,nSal,rGanho;
   
   scanf("%lf",&salF);
   if (salF>=0 && salF<=400.00){
       rGanho = salF * 0.15;
       nSal = rGanho + salF;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n",nSal,rGanho);
   }else 
    if (salF<=800.00){
       rGanho = salF * 0.12;
       nSal = rGanho + salF;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n",nSal,rGanho);
   }else
    if (salF<=1200.00){
       rGanho = salF * 0.10;
       nSal = rGanho + salF;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n",nSal,rGanho);
   }else
    if (salF<=2000.00){
       rGanho = salF * 0.07;
       nSal = rGanho + salF;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n",nSal,rGanho);
   }else
    if (salF>0){
       rGanho = salF * 0.04;
       nSal = rGanho + salF;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n",nSal,rGanho);
   }
    return 0;
}
