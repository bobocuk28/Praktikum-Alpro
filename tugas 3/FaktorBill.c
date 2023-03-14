/*Nama File : FaktorBill */
/*Deskripsi : algoritma jika diberikan sebuah bilangan N (N>0) integer sembarang, maka tentukanlah faktor bilangan yang dapat dibentuk oleh bilangan N tersebut */
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : minggu, 12/03/2023, 11.30*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*ksmus*/
    int N,i;
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
            }
        }


    }


return 0;

}
