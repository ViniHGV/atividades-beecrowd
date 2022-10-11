#include <stdio.h>
 
int main() {
 
    double S=0,tot=0;
    
    scanf("%lf",&S);
    if (S>=0.00 && S<=2000.00){
        printf("Isento\n");
    }else 
    if (S<=3000.00){
        S= S-2000;
        tot = S * 0.08;
         printf("R$ %.2lf\n",tot);
    }else
    if (S<=4500.00){
        S=S-3000;
        tot = (S *0.18) + (1000 *0.08);
        printf("R$ %.2lf\n",tot);
    }else
     if (S>4500.00){
         S=S-4500;
         tot = (S *0.28) + (1500*0.18) + (1000*0.08);
         printf("R$ %.2lf\n",tot);
    }
    return 0;
}
