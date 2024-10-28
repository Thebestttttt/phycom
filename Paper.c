#include <stdio.h>
#include <math.h>
int main(){
    int str1, str2;
    scanf("A%d A%d", &str1, &str2);
    int result = pow(2, (str2-str1));
    printf("%d", result);
    return 0;
}