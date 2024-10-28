#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if (num < 1000){
        if (num%10==0||num%10==5){
            printf("Science");
        }else if (num%10==3||num%10==7){
            printf("Literature");
        }else{
            printf("General Collection");
        }
    }else{
        if (num%4==0){
            printf("Reference");
        }else if (num%100==11||num%100==22||num%100==33){
            printf("History");
        }else{
            printf("Unclassified");
        }
    }
    return 0;
}