/*Nama File : namaHari */
/*Deskripsi : mengidentifikasi suatu bilangan integer apakah positif, negatif, nol */
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : selasa, 28/02/2023, 11.30*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*kamus*/
    int a;
    printf("masukkan bilangan : ");

    /*algoritma*/
    if (scanf("%d",&a)){
        if (a>=0){
            if (a>0){
            printf("bilangan bulat positif");
            }
            else{
            printf("nol");
            }
        }else{
            printf("bilangan bulat negative");
        }

    }else{
        printf("Bukan termsuk bilangan");
    }

    return 0;
}
