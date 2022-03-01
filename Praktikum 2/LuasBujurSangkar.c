/*Nama File	: LuasBujurSangkar.c*/
/*Deskripsi	: Menghitung luas Bujur Sangkar dan menampilkan*/
/*Pembuat	: [Muhammad Naufal Arkan - 24060121130073]*/
/*Tgl pembuatan	: [Selasa, 01-03-2022 11:22 WIB]*/
#include <stdio.h>
#include <stdlib.h>

int main(){
/*Kamus*/
    int sisi;

/*Algoritma*/
    printf("=============Menghitung Luas Bujur Sangkar=============\n");
    printf("\nMasukkan Sisi = ");scanf("%d", &sisi);

    printf("\n=======================================================");
    printf("\nLuas Bujur Sangkar = %d x %d = %d\n", sisi, sisi, sisi * sisi);
    printf("=======================================================\n");

    return 0;
}