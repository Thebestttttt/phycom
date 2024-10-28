#include <stdio.h>
int main(){
    float s;
    scanf("%f", &s);
    if (0<s&&s<48.697){
        printf("Ayutthaya");
    }else if (48.697<s&&s<66.256){
        printf("Ang Thong");
    }else if (66.256<s&&s<84.918){
        printf("Sing Buri");
    }else if (84.918<s&&s<85.900){
        printf("Lop Buri");
    }else if (85.900<s&&s<111.936){
        printf("Sing Buri");
    }else if (111.936<s&&s<150.019){
        printf("Chai Nat");
    }else if (s>150.019 && s<150.545){
        printf("Nakhon Sawan");
    }else{
        printf("InValid");
    }
    return 0;
}
