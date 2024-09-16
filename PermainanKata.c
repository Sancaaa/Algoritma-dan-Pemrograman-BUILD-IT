#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char input1[20];
    int panjang1;
    fgets(input1, 20, stdin);
    input1[strcspn(input1, "\n")] = '\0';
    panjang1 = strlen(input1);
    
    char input2[20];
    int panjang2;
    fgets(input2, 20, stdin);
    input2[strcspn(input2, "\n")] = '\0';
    panjang2 = strlen(input2);
    
    if(strcmp(input1, input2) == 0){
        printf("IDENTIK");
    }else if(panjang1 == panjang2){
        printf("MIRIP");
    }else {
        printf("BERBEDA");
    }
    return 0;
}
