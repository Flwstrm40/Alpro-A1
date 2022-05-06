/*Nama File	    : SelectionSortAsc.c*/
/*Deskripsi	    : Mengurut tabel integer [1..N] secara menaik dengan selection sort*/
/*Pembuat	    : [Muhammad Naufal Arkan - 24060121130073]*/
/*Tgl pembuatan	: [Minggu, 01-05-2022 20:47 WIB]*/

#include <stdio.h>

int main(){
/*kamus*/
    int pass; // Tahapan Pengurutan
    int k, j;
    int Temp, posisi;
    int T[10]={34,27,21,8,3,81,56,45,90,59};
    int N = 10;

/*Algoritma*/
    printf("====================================\n");
    printf("=  Selection Sort Ascending Order  =");
    printf("\n====================================\n\n");
    /*Data sebelum diurutkan*/
    printf("Tabel Sebelum diurutkan: \n");
    for (int k = 1; k <= N; k++)
    {
        printf("%d ", T[k-1]);
    }
    
    for(pass = 0; pass < N-1; pass++){
        posisi = pass;
        for (j = pass + 1; j < N; j++){
            if(T[posisi] > T[j]){
                posisi = j;
            }
        }
        if(posisi != pass){
            Temp = T[pass];
            T[pass] = T[posisi];
            T[posisi] = Temp;
        }
    }

    /*Data setelah diurutkan*/
    printf("\n\nTabel setelah diurutkan (Ascending): \n");
    for (int k = 1; k <= N; k++)
    {
        printf("%d ", T[k-1]);
    }
    printf("\n\n====================================\n");
    return 0;
}