/*Nama File	    : InsertionSortAsc.c*/
/*Deskripsi	    : Mengurut tabel integer [1..N] secara menaik dengan insertion sort*/
/*Pembuat	    : [Muhammad Naufal Arkan - 24060121130073]*/
/*Tgl pembuatan	: [Sabtu, 30-04-2022 20:14 WIB]*/

#include <stdio.h>

int main(){
/*kamus*/
    int pass; // Tahapan Pengurutan
    int i, k;
    int Temp;
    int T[10]={34,27,21,8,3,81,56,45,90,59};
    int N = 10;

/*Algoritma*/
    printf("====================================\n");
    printf("=  Insertion Sort Ascending Order  =");
    printf("\n====================================\n\n");
    /*Data sebelum diurutkan*/
    printf("Tabel Sebelum diurutkan: \n");
    for (int k = 1; k <= N; k++)
    {
        printf("%d ", T[k-1]);
    }
    
    for (int pass = 1; pass < N; pass++)
    {
        Temp = T[pass];
        T[-1] = Temp;

        i = pass-1;
        while (Temp < T[i])
        {
            T[i+1] = T[i];
            i -= 1;
        }
        T[i+1] = Temp;
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