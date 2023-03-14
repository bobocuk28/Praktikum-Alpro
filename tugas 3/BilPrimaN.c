/*Nama File : BilPrimaN */
/*Deskripsi : algoritma untuk menentukan apakah sebuah bilangan integer sembarang N (N>0) adalah sebuah bilangan Prima atau Bukan */
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : senin, 13/03/2023, 16.30*/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int N, faktor = 0;
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &N);

    printf("Bilangan prima antara 2 dan %d adalah: ", N);
    for (int i = 2; i <= N; i++) {
        faktor = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                faktor++;
            }
        }
        if (faktor == 2) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

