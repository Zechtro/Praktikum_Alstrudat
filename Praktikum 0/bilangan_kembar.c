#include<stdio.h>
 int isKembar(int x){ 
    // mis x = 111
    
    if(x >=0 && x <= 9){
        return 0;
    } else {
        int angka;
        angka = x%10; // 1
        while(x > 9){
            x = x/10 ;// 11
            if(angka != x%10){
                return 0;
            }
        }
        return 1;
    }
}

 int main(){
    int a, b, i, count, kembar;
    count = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    for(i=a; i<=b; i++){
        kembar = isKembar(i);
        if(kembar == 1){
            count += 1;
        }
    }
    printf("%d\n", count);
    return 0;
 }


    