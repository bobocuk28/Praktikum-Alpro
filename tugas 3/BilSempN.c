/*Nama File : BilSempN */
/*Deskripsi : algoritma untuk mencetak bilangan Sempurna sampai dengan bilangan integer sembarang N.  */
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : senin, 13/03/2023, 16.30*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, faktor = 0, sum = 0;
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &N);

    printf("Bilangan sempurna antara 2 dan %d adalah: ", N);
    for (int i = 2; i <= N; i++) {
        faktor = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                faktor++;
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
        sum = 0;
    }
    printf("\n");

    return 0;
}
