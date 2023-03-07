/*Nama File : bilInteger */
/*Deskripsi : mengidentifikasi sebuah hari dengan massukan sebuah angka*/
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : selasa, 28/02/2023, 19.30*/

#include <stdio.h>
#include <stdlib.h>


int main() {
//Kamus
    int a;

//Algoritma
    printf("hari ini, hari : ");
    scanf("%d", &a);

    switch(a){
    case 1:
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jum'at");
        break;
    case 6:
        printf("Sabtu");
        break;
    case 7:
        printf("Minggu");
        break;

    default:
        printf("gagal");
        break;
    }

 return 0;
}


