#include<stdio.h>
#include<string.h>
 int main(){
    char angka[20];
    int i, sum;
    sum = 0;
    scanf("%s", angka);
    for (i=0; i < strlen(angka);i++){
        sum+= (int)angka[i]-48;
    }
    printf("%d\n", sum);
    return 0;
 }