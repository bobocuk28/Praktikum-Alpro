/*Nama File : FrekNTabel */
/*Deskripsi : algoritma untuk menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali.   */
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

    int maks = 0;
    for (i=1;i<=n;i++){
        scanf("%d",&tab[i]);
        if (tab[i]>maks){
            maks=tab[i];
        }
    }
    int f[maks+1];
    for (i=1;i<=maks;i++){
        f[i]=0;
    }
    for (i=1;i<=n;i++){
        f[tab[i]] = f[tab[i]]+1;
    }

    for (i=1;i<=n;i++){
        if (f[tab[i]]>1){
            printf("%d ",tab[i]);
            f[tab[i]]=0;
        }

    }



    return 0;
}
