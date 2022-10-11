#include <stdio.h>
 
int main() {
 
   double n=0;
   int cont=6,ad=0,pos=0;
   
   while(ad<cont){
       scanf("%lf",&n);
       if(n>0){
           pos++;
       }
    ad++;
   }
   printf("%d valores positivos\n",pos);
   
    return 0;
}
