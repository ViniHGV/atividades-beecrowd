#include <stdio.h>

int main()
{
    int i=0;
    double A[100],x;
    
    for(i=0;i<100;i++){
        scanf("%lf",&x);
            A[i]=x;
    }

    for(i=0;i<100;i++){
        if(A[i]<=10){
            printf("A[%d] = %.1lf\n",i,A[i]);
        }
    }
    

    return 0;
}
