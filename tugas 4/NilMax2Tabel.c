/*Nama File : NilMcx2Tabel */
/*Deskripsi : algoritma untuk menampilkan nilai maksimum ke-2 */
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : senin, 21/03/2023, 13.30*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    /*kamus*/
    int n;
    scanf ("%d",&n);
    int tab [n+1];
    int i;

    /*algoritma*/

    int maks1 = 0;
    int maks2 = 0;
    for (i=1;i<=n;i++){
        scanf("%d",&tab[i]);
    }
    for (i=1;i<=n;i++){
        if (tab[i]>maks1){
            maks2=maks1;
            maks1=tab[i];
        } else if ((tab[i]<maks1)&&(tab[i]>maks2)){
            maks2=tab[i];
        }

    }
    printf ("%d",maks2);


    return 0;
}
