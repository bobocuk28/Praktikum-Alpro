/*Nama File : JumDeret */
/*Deskripsi : jika diberikan deret bilangan sebanyak N (N>0) integer maka akan menghitung total deret */
/*Pembuat   : Naufal alwi ramadhani - 24060122140154*/
/*Tanggal   : minggu, 12/03/2023, 11.30*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,jumlah=0;

    scanf ("%d", &x);

    if(x>0){
        for(int i=1; i<= x; i++){
            jumlah +=i;
        }
    printf("jumlah = %d",jumlah);
    } else {
        printf("x tidak boleh negatif");
    }





return 0;

}
