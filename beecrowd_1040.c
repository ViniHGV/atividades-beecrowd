#include <stdio.h>
 
int main() {

    double N1=0,N2=0,N3=0,N4=0,MEDIA=0,nExame=0;
  
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    MEDIA = (N1*2+N2*3+N3*4+N4) / 10;
    if (MEDIA>=7){
        printf("Media: %.1lf\nAluno aprovado.\n",MEDIA);
    }else 
    if (MEDIA<5){
        printf("Media: %.1lf\nAluno reprovado.\n",MEDIA);
    }else{
        printf("Media: %.1lf\nAluno em exame.\n",MEDIA);
        scanf("%lf",&nExame);
        printf("Nota do exame: %.1lf\n",nExame);
        MEDIA = (MEDIA + nExame) /2;
        if (MEDIA>=5){
            printf("Aluno aprovado.\nMedia final: %.1lf\n",MEDIA);
        }else{
            printf("Aluno reprovado.\nMedia final: %.1lf\n",MEDIA);
        }
    }
    return 0;
}
