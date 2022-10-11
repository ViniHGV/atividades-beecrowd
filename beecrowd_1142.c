#include <stdio.h>
 
int main() {

     int n,cont=1,num=1;
    
    scanf("%d",&n);
    while (cont<=n){
        printf("%d %d %d PUM\n",num,num+1,num+2);
        num=num+4;
        cont++;
    }
    return 0;
}
