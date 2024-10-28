#include <stdio.h>
#include <string.h>
int main(){
    char allchar[53], input[100], *pointer;
    int count[52]={0}, i=0;
    for (char ch = 'a'; ch <= 'z'; ch++){
        allchar[i++] = ch;
        allchar[i++] = ch-32; 
    }
    allchar[i++] = '\0';
    scanf("%[^\n]", input);
    i = 0;
    while (input[i] != '\0'){
        pointer = strchr(allchar, input[i++]);
        if (pointer != NULL){
            int index = pointer-allchar;
            count[index]++;
        }
    }
    for(int j = 0; j < 52; j++ ){
        if (count[j] > 0){
            printf("%c = %d\n", allchar[j], count[j]);
        }
    }
    return 0;
}