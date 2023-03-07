/*Nama File : kallSS */
/*Deskripsi : Menmasukkan nilai yang kemudian dioperasikan oleh variabel */
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : selasa, 06/03/2023, 19.30*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
     /*kamus*/
    int iA;
    int iB;
    char o;
    char buf;
    /*algoritma*/
    printf("Masukkan nilai iA : ");
    scanf("%d", &iA);
    printf("Masukkan nilai iB : ");
    scanf("%d", &iB);
    printf("Masukkan nilai O : ");
    scanf("%c", &buf);
    scanf("%c", &o);

    switch (o){
    case ('a'):
    printf("%d",iA+iB);
    break;
    case ('b'):
    printf("%d",iA-iB);
    break;
    case ('c'):
    printf("%d",iA*iB);
    break;
    case ('d'):
    printf("%f",(float)iA/(float)iB);
    break;
    case ('e'):
    printf("%d",iA/iB);
    break;
    case ('f'):
    printf("%d",iA%iB);
    break;
    default:
    printf("Bukan pilihan menu yang benar");
    break;
    }
}
