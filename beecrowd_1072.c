#include <stdio.h>
 
int main() {

   int n=0,x=0,vI=0,nI=0,ad=0;
   scanf("%d",&n);
   while(ad<n){
       scanf("%d",&x);
       if(x>=10 && x<=20){
           vI++;
       }else{
         nI++  ;
       }
    ad++;
   }
    printf("%d in\n%d out\n",vI,nI);
    return 0;
}
