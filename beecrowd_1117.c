#include <stdio.h>
 
int main() {

 double av1=11,av2=11,media=0;
    
    while(av1<0 || av1>10){
        scanf("%lf",&av1);
        if(av1<0 || av1>10){
        printf("nota invalida\n");
        }
    }
    media+=av1;
    while(av2<0 || av2>10){
        scanf("%lf",&av2);
        if(av2<0 || av2>10){
        printf("nota invalida\n");
        }
    }
    media+=av2;
    printf("media = %.2lf\n",media/2);
    return 0;
}
