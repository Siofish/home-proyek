#include <stdio.h>
int main() {
   
//variable
int pecahanUang[] = {100000,75000, 50000, 20000, 10000, 2000, 1000, 500, 100,50,10,5,1};
int size = sizeof(pecahanUang) / sizeof(pecahanUang[0]);
int jumlahPecahan[size];
int kembalian;

//algoritma
printf("masukan jumalah kembalian anda:");
scanf("%d", &kembalian);

const int kembalian_awal = kembalian;

printf("kembalian anda sebesar %d adalah\n", kembalian_awal);

//proses_logic
for (int i=0; i<size; i++) {
    jumlahPecahan[i] = kembalian / pecahanUang[i];
    kembalian = kembalian % pecahanUang[i];
}
//output
for (int i=0; i<size; i++) {
    if (jumlahPecahan[i] > 0) {


    if (pecahanUang[i] >= 1000){
        printf("%d lembar%d\n", jumlahPecahan[i], pecahanUang[i]);
    }
        else {
            printf("%d koin %d\n", jumlahPecahan[i], pecahanUang[i]);
        }
    }

}
return 0;
}

