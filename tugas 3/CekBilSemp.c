/*Nama File : CekBilSemp */
/*Deskripsi : Algoritma untuk menentukan apakah sebuah bilangan integer sembarang N (N>0) adalah bilangan Sempurna atau Bukan*/
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : senin, 13/03/2023, 16.30*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*ksmus*/
    int N,i,faktor=0;
    int sum = 0;
    /*algoritma*/
    scanf ("%d", &N);
    if (N<1)
    {
        printf("N harus bernilai positif");
    }
    else
    {
        printf("N = %d, faktor bilangannya adalah : ",N);
        for(i=1; i<= N; i++)
        {
            if (N % i ==0)
            {
             printf("%d ",i);
             faktor++;
            }
        }

    printf("\n");

    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }
    if (sum == N) {
        printf("%d adalah bilangan sempurna\n", N);
    } else {
        printf("%d bukan bilangan sempurna\n", N);
    }
return 0;
}
}
