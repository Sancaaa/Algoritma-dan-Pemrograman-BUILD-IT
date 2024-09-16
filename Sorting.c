#include <stdio.h>

int main(){
    //Memasukan panjang array dan nilai array
    int N;                                      
    // printf("len:");
    scanf("%d", &N);

    int array[N];
    for(int i = 0; i < N; i++){
    // printf("himpunan:");
    scanf("%d", &array[i]);
    }

    //melakukan sorting, swap sampai nilai besar ada di kanan
    for(int j = 0; j < N; j++){
        for(int k = 0; k < (N-1); k++){
            if(array[k] > array[k+1]){
                int swap = array[k];
                array[k] = array[k+1];
                array[k+1] = swap;
            }
        }
    }

    //printing array
    for(int p = 0; p < N; p++){
        printf("%d \n" , array[p]);
    }
}
