/*Nama File	: CekBulan.c*/
/*Deskripsi	: Membuat program mengecek nama bulan melalui inputan nomor dari keyboard*/
/*Pembuat	: [Muhammad Naufal Arkan - 24060121130073]*/
/*Tgl pembuatan	: [Selasa, 08-03-2022 12:31 WIB]*/

#include <stdio.h>

int main(){
/*Kamus*/
    int X;

/*Algoritma*/
    printf("\n====== Program Cek Nama Bulan berdasarkan Nomor yang Dimasukkan ======\n");
    printf("\nMasukkan Nomor Sesuai Jumlah Bulan (1-12): ");scanf("%d", &X); // bulan pertama adalah Januari
    printf("\n============================= HASIL =============================\n\n");

    if (1 <= X && X <= 12 )
    {
        switch (X)
        {
            case 1:
                printf("Bulan ke-%d adalah bulan Januari", X);
                break;
            case 2:
                printf("Bulan ke-%d adalah bulan Februari", X);
                break;
            case 3:
                printf("Bulan ke-%d adalah bulan Maret", X);
                break;
            case 4:
                printf("Bulan ke-%d adalah bulan April", X);
                break;
            case 5:
                printf("Bulan ke-%d adalah bulan Mei", X);
                break;
            case 6:
                printf("Bulan ke-%d adalah bulan Juni", X);
                break;
            case 7:
                printf("Bulan ke-%d adalah bulan Juli", X);
                break;
            case 8:
                printf("Bulan ke-%d adalah bulan Agustus", X);
                break;
            case 9:
                printf("Bulan ke-%d adalah bulan September", X);
                break;
            case 10:
                printf("Bulan ke-%d adalah bulan Oktober", X);
                break;
            case 11:
                printf("Bulan ke-%d adalah bulan November", X);
                break;
            case 12:
                printf("Bulan ke-%d adalah bulan Desember", X);
                break;
        }
    }
    else {
        printf("Masukan nomor bulan tidak tepat");
    }
    
    
    printf("\n\n=================================================================\n");

    return 0;
}