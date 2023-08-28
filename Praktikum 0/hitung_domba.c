#include<stdio.h>
 int main(){
    int M, N, i;
    scanf("%d", &M);
    scanf("%d", &N);
    for(i=1; i<= M; i++){
        (i%N == 0) ? printf("happy\n") : printf("%d\n", i);
    }
    return 0;
 }