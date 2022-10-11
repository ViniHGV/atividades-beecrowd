#include <stdio.h>
 
int main() {

    int idade=1,cont=0;
    double media=0;
    
    while(idade>=0){
        scanf("%d",&idade);
        if(idade>=0){
        media+=idade;
        cont++;
        }
    }
    printf("%.2lf\n",media/cont);
    return 0;
}
