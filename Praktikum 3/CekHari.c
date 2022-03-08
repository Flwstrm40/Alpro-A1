/*Nama File	: CekHari.c*/
/*Deskripsi	: Membuat program mengecek nama hari melalui inputan nomor dari keyboard*/
/*Pembuat	: [Muhammad Naufal Arkan - 24060121130073]*/
/*Tgl pembuatan	: [Selasa, 08-03-2022 11:45 WIB]*/

#include <stdio.h>

int main(){
/*Kamus*/
    int X;

/*Algoritma*/
    printf("\n====== Program Cek Nama Hari berdasarkan Nomor yang Dimasukkan ======\n");
    printf("\nMasukkan Nomor Sesuai Jumlah Hari (1-7): ");scanf("%d", &X); // hari pertama adalah hari minggu
    printf("\n============================= HASIL =============================\n\n");

    if (1 <= X && X <= 7 )
    {
        switch (X)
        {
            case 1:
                printf("Hari ke-%d adalah hari Minggu", X);
                break;
            case 2:
                printf("Hari ke-%d adalah hari Senin", X);
                break;
            case 3:
                printf("Hari ke-%d adalah hari Selasa", X);
                break;
            case 4:
                printf("Hari ke-%d adalah hari Rabu", X);
                break;
            case 5:
                printf("Hari ke-%d adalah hari Kamis", X);
                break;
            case 6:
                printf("Hari ke-%d adalah hari Jumat", X);
                break;
            case 7:
                printf("Hari ke-%d adalah hari Sabtu", X);
                break;
        }
    }
    else {
        printf("Masukan nomor hari tidak tepat");
    }
    
    
    printf("\n\n=================================================================\n");

    return 0;
}