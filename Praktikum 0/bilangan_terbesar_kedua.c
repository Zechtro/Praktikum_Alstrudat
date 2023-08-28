#include<stdio.h>
 int main(){
    int n, i, max1, max2, input;
    scanf("%d", &n);
    int arr[n];
    max1 = 0;
    max2 = 0;
    for(i=0; i<n; i++){
        scanf("%d", &input);
        arr[i] = input;
    }
    for(i=0; i<n;i++){
        if(arr[i]>max1){
            max1 = arr[i];
        } else if(arr[i]>max2){
            max2 = arr[i];
        }
    }
    printf("%d\n",max2);
    return 0;
 }