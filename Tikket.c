#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, a, b, c, d, e, f, g;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &num, &a, &b, &c,&d, &e, &f, &g);
    
    if (f>g){
        int ch = g;
        g = f;
        f = ch;
    }
    int ch2 = abs(f-g);
    int result = b;
    ch2 = ch2 - a;
    if (num >= f && num >= g){
        if (ch2>0){
            for(int i=1; i<=c ;i++){
                if (ch2>0){
                    result += d;
                    ch2 -= 1;
                }
            }
        }
    }else{
        printf("Error");
    }
    result += ch2*e;
    printf("%d", result);
    return 0;
}