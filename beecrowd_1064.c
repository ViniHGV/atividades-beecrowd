#include <stdio.h>
 
int main() {
 
    double n=0,d=0;
    int cont=6,ad=0,pos=0;
   
   while(ad<cont){
       scanf("%lf",&n);
       if(n>0){
           pos++;
           d+= n ;
       }
    ad++;
   }
   d = d/pos;
   printf("%d valores positivos\n%.1lf\n",pos,d);
  
    return 0;
}
