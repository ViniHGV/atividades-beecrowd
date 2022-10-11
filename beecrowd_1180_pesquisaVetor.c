#include <stdio.h>

int main ()
{

    int N, i=0, x, men, pos;
    scanf("%d", &N);
    int vet[N];

    while(i<N){
        scanf("%d", &x);
        vet[i] = x;
        i++;
    }
    men = vet[0];
    for (i=1;i<N;i++)
    {
        if(vet[i]<men){
            men = vet[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", men);
    printf("Posicao: %d\n", pos);
    return 0;
}
