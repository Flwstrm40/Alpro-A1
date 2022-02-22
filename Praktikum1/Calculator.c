#include <stdio.h>

float plus(float x, float y){
    return x + y;
}

float minus(float x, float y){
    return x - y;
}

float kali(float x, float y){
    return x * y;
}

float bagi(float x, float y){
    return x / y;
}


int main(){
    int inp;
    float b, a;

    printf("============ Selamat datang di program kalkulator ===========\n");
    printf("=============================================================");
    printf("\n================ Silakan pilih Menu di bawah ================\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");

    // Input
    printf("Silakan Input Pilihan Anda(1/2/3/4): ");scanf("%d", &inp);
    printf("\nBilangan ke-1: ");scanf("%f", &a);
    printf("Bilangan ke-2: ");scanf("%f", &b);
    printf("========================== Result ==========================\n\n");
    // program
    if (inp == 1)
    {
        printf("Hasil: %.2f\n", plus(a,b));
    }
    else if (inp == 2)
    {
        printf("Hasil: %.2f\n", minus(a,b));
    }
    else if (inp == 3)
    {
        printf("Hasil: %.2f\n", kali(a,b));
    }
    else if (inp == 4)
    {
        printf("Hasil: %.2f\n", bagi(a,b));
    }
    else {
        printf("Mohon input menu dengan benar!");
    }

    printf("\n=============================================================");
    printf("\n=============== Terima kasih telah berkunjung ===============");
    return 0;
}
