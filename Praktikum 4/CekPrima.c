/*Nama File	: CekPrima.c*/
/*Deskripsi	: Membuat program untuk mengecek apakah suatu inputan bilangan integer sembarang > 0 merupakan bilangan prima atau bukan*/
/*Pembuat	: [Muhammad Naufal Arkan - 24060121130073]*/
/*Tgl pembuatan	: [Selasa, 15-03-2022 11:46 WIB]*/
#include <stdio.h>

int main(){
/*Kamus Lokal*/
    int N, i, totalBil;

/*Algoritma*/
    printf("=============== Program Cek Bilangan Prima ===============\n\n");
    printf("Masukkan nilai N (>0): ");scanf("%d", &N); /*input*/
    printf("\n========================= Hasil ==========================\n");
    
    if (N<=0)
    {
        printf("\nN harus positif\n");

    }
    else{
        totalBil = 0;
        for (int i = 1; i <= N; i++){
            if (N % i == 0){
                    totalBil = totalBil + 1;            
            }
        }
        
        if (totalBil==2)
        {
            printf("\n%d adalah bilangan prima\n", N);
        }
        else{
            printf("\n%d adalah bukan bilangan prima\n", N);
        }
    }
    printf("\n==========================================================");
    return 0;
}
