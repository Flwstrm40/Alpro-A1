/*Nama File	    : BubbleSortDesc.c*/
/*Deskripsi	    : Mengurut tabel integer [1..N] secara menurun dengan bubble sort*/
/*Pembuat	    : [Muhammad Naufal Arkan - 24060121130073]*/
/*Tgl pembuatan	: [Sabtu, 30-04-2022 20:14 WIB]*/

#include <stdio.h>
#include <stdbool.h>

int main(){
/*kamus*/
    int pass; // Tahapan Pengurutan
    int k;
    int Temp, Tukar;
    int T[10]={34,27,21,8,3,81,56,45,90,59};
    int N = 10;

/*Algoritma*/
    printf("====================================\n");
    printf("=   Bubble Sort Descending Order   =");
    printf("\n====================================\n\n");
    /*Data sebelum diurutkan*/
    printf("Tabel Sebelum diurutkan: \n");
    for (int k = 1; k <= N; k++)
    {
        printf("%d ", T[k-1]);
    }
    pass = 1;
    Tukar = true;
    while (pass <= N && Tukar)
    {
        Tukar = false;
        for (int k = 1; k <= N-pass; k++)
        {
            if (T[k-1] < T[k])
            {
                Temp = T[k-1];
                T[k-1] = T[k];
                T[k] = Temp;
                Tukar = true;
            }
        }
        pass += 1;
    }
    
    /*Data setelah diurutkan*/
    printf("\n\nTabel setelah diurutkan (Descending): \n");
    for (int k = 1; k <= N; k++)
    {
        printf("%d ", T[k-1]);
    }
    printf("\n\n====================================\n");
    return 0;
}