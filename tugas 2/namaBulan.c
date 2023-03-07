/*Nama File : namaBulan */
/*Deskripsi : mengidentifikasi sebuah bulan dengan massukan sebuah angka*/
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : selasa, 28/02/2023, 19.30*/

#include <stdio.h>
#include <stdlib.h>



int main() {
    /*Kamus*/
    int a;

    /*Algoritma*/
    printf("bulan ini, bulan : ");
    scanf("%d", &a);

    switch(a){
    case 1:
        printf("januari");
        break;
    case 2:
        printf("februari");
        break;
    case 3:
        printf("maret");
        break;
    case 4:
        printf("april");
        break;
    case 5:
        printf("mei");
        break;
    case 6:
        printf("juni");
        break;
    case 7:
        printf("juli");
        break;
    case 8:
        printf("agustus");
        break;
    case 9:
        printf("september");
        break;
    case 10:
        printf("oktober");
        break;
    case 11:
        printf("november");
        break;
    case 12:
        printf("desember");
        break;
    default:
        printf("Masukan nomor bulan tidak tepat");
        break;
    }

 return 0;
}


