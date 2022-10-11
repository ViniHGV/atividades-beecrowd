#include <stdio.h>

int main()
{
    int N[10],i=0,V,X;
    
    scanf("%d",&V);
    
    X=V;
    for(i=0;i<10;i++){
        N[i] = X;
        printf("N[%d] = %d\n",i,X);
        X=X*2;
    }

    return 0;
}
