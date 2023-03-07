/*Nama File : CekSegitiga */
/*Deskripsi : Mengecek sisi segitiga yang dibentk kemudian diidentifikasi termasuk segitiga apa */
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : senin, 06/03/2023, 19.30*/

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

    if (a<0 || b<0 || c<0){
        printf("Terdapat nilai yang bukan sisi segitiga");
    } else {
        if (a+b <= c || a+c <= b || b+c <= a){
            printf("Tidak Dapat Membentuk Segitiga");}
        else if (a==b && b==c){
        printf("Segitiga Sama Sisi ");}
        else if(a==b||b==c||c==a){
        printf("Segitiga Sama Kaki");}
        else if (a+b>c||a+c>b||b+c>a){
        printf("Segitiga Sembarang");}

    }


}
