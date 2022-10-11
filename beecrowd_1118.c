#include <stdio.h>
 
int main() {
 
    double av1=11,av2=11,media=0;
    int nc=1;
    
    while (nc==1){
        media=0;
        av1=11;
        while(av1<0 || av1>10){
            scanf("%lf",&av1);
            if(av1<0 || av1>10){
                printf("nota invalida\n");
            }
        }
        media+=av1;
        av2=11;
        while(av2<0 || av2>10){
            scanf("%lf",&av2);
            if(av2<0 || av2>10){
              printf("nota invalida\n");
            }
        }
        media+=av2;
        printf("media = %.2lf\n",media/2);
        nc=0;
        while(nc<1 || nc>2){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&nc);
        }
        
    }
    return 0;
}
