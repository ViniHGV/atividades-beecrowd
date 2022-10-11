#include <stdio.h>
#include <math.h>

int main()
{
    int hI=0,hF=0;
    
    scanf("%d%d",&hI,&hF);
    
    if (hI >12 && hF <12){
        printf("O JOGO DUROU %d HORA(S)\n", abs(abs(hI-12)-(hF+12)));
    }else
    if (hI<12 && hF>12) {
            printf("O JOGO DUROU %d HORA(S)\n", abs((hI+12)-abs(hF+12)));
    }else
    if(hI ==0 && hF ==0 || hI==hF ){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
