/*Nama File	: FaktorBil.c*/
/*Deskripsi	: Membuat program menampilkan faktor-faktor dari suatu inputan bilangan integer > 0 sembarang*/
/*Pembuat	: [Muhammad Naufal Arkan - 24060121130073]*/
/*Tgl pembuatan	: [Selasa, 15-03-2022 11:42 WIB]*/
#include <stdio.h>

int main(){
/*Kamus Lokal*/
    int N, i;

/*Algoritma*/
    printf("=============== Program Menuliskan Faktor dari N ===============\n\n");
    printf("Masukkan nilai N (>0): ");scanf("%d", &N); /*input*/
    printf("\n============================ Hasil =============================\n");
    
    if (N<=0)
    {
        printf("\nN harus positif\n");

    }
    else{
        printf("\nFaktor dari %d adalah =",N);    
         for (int i = 1; i <= N; i++){
            if (N % i == 0){
                
                printf(" %d", i);
            }
            
        }
        printf("\n");
    }
    printf("\n================================================================");
    return 0;
}