/*Nama File	    : CountingSortDesc.c*/
/*Deskripsi	    : Mengurut tabel integer [1..N] secara menurun dengan counting sort*/
/*Pembuat	    : [Muhammad Naufal Arkan - 24060121130073]*/
/*Tgl pembuatan	: [Minggu, 1-05-2022 14:25 WIB]*/

#include <stdio.h>

int main(){
/*kamus*/
    int i;
    int Output[102];
    int Max;
    int T[10]={34,27,21,8,3,81,56,45,90,59};
    int TabCount[102];
    int N = 10;

/*Algoritma*/
    printf("====================================\n");
    printf("=  Counting Sort Descending Order  =");
    printf("\n====================================\n\n");
    /*Data sebelum diurutkan*/
    printf("Tabel Sebelum diurutkan: \n");
    for (int i = 1; i <= N; i++)
    {
        printf("%d ", T[i-1]);
    }

    Max=T[0]; //mencari nilai Max Array T
    for(i = 1;i<N;i++){
        if(T[i]>Max){
            Max = T[i];
        }
    }
    
    for(int i=0;i<=Max;i++){ // inisialisasi TabCount semua 0 
        TabCount[i] =0;
    }

    for(int i=0;i<N;i++){ // Counting
        TabCount[T[i]] =TabCount[T[i]] +1; 
    }
    
    for(int i=1;i<=Max;i++){ 
        TabCount[i] = TabCount[i] + TabCount[i-1];
    }

    for(int i=N-1;i>=0;i--){ // Pengisian kembali 
        Output[N-TabCount[T[i]]] = T[i];
        TabCount[T[i]] = TabCount[T[i]] - 1;
    }

    /*Data setelah diurutkan*/
    printf("\n\nTabel setelah diurutkan (Descending): \n");
    for (int i = 1; i <= N; i++)
    {
        printf("%d ", Output[i-1]);
    }
    printf("\n\n====================================\n");
    return 0;
}