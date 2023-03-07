/*Nama File : hitungTahanan */
/*Deskripsi : Menghitung tahanan dengan memasukkan nilai integer positif lalu menjumlahkan ketiganya */
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : selasa, 28/02/2023, 19.30*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*kamus*/
    int a;
    int b;
    int c;

    /*algoritma*/
    printf("Masukkan nilai a : ");
    scanf("%d", &a);
    printf("Masukkan nilai b : ");
    scanf("%d", &b);
    printf("Masukkan nilai c : ");
    scanf("%d", &c);

    if (a>0 && b>0 && c>0){
        printf("%d", a+b+c);
    } else { printf("Masukan tahanan tidak boleh negatif");
    }




}
