#include <stdio.h>
#include <math.h>  

int main() {
    long int N;  // input
    scanf("%ld", &N); 

    // 1 bukan prima
    if (N <= 1) {
        printf("BUKAN\n");
        return 0;
    }

    // pengecekan
    long int i;
    int prima = 1; 

    for (i = 2; i <= sqrt(N); i++) {  //akar untuk mencari pembagi yang lebih kecil secara efisien
        if (N % i == 0) {  // jika bisa dibagi angka lain, bukan prima
            prima = 0;
            break;
        }
    }

    if (prima) {
        printf("PRIMA\n"); 
    } else {
        printf("BUKAN\n"); 
    }

    return 0;
}
