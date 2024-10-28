#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if (num < 1000){
        if (num%10==0){
            printf("Command-class starship");
        }else if (num%10==5){
            printf("Exploration-class starship");
        }else{
            printf("General-class starship");
        }
    }else{
        int num1 = num;
        while (num1 >= 10){
            num1/=10;
        }if(num1%2==0){
            if (num%100==50||num%100==75){
                printf("Active Starfleet Flagship");
            }else{
                printf("Active Standard-class starship");
            }
        }else{
            if (num%100==50||num%100==75){
                printf("Reserve Starfleet Flagship");
            }else{
                printf("Reserve Standard-class starship");
            }
        }
    }
    return 0;
}