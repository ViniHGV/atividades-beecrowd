#include <stdio.h>
 
int main() {
 
    int n,cont=1;
    scanf("%d",&n);
    while(cont<=10){
        printf("%d x %d = %d\n",cont,n,cont*n);
        cont++;
    }
    return 0;
}
