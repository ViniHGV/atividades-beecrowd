#include <stdio.h>
 
int main() {
 
    int hTrabalhada,vHora;
    double Sal ;
  
    scanf("%d%d%lf",&hTrabalhada,&vHora,&Sal);
    Sal = Sal * vHora;
    printf("NUMBER = %d\n",hTrabalhada);
    printf("SALARY = U$ %.2lf\n",Sal);
    return 0;
}
