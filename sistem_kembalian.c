// --HEAD
// PROGRAM menghitung_kembalian

// --DECLARATION
// VAR Nominal_uang: ARRAY OF INT = {100000, 75000, 50000, 20000, 10000, 2000, 1000, 500, 100, 50, 10, 5, 1}
// VAR JumlahPecahan: ARRAY OF INT
// VAR Size, Kembalian, Nominal_awal: INT
// VAR i: INT

// --ALGORITHMA
// START
//     PRINT("Masukkan nominal kembalian anda: ")
//     INPUT(Kembalian)
    
//     Nominal_awal = Kembalian
//     Size = 13 // atau panjang dari array Nominal_uang
    
//     PRINT("Kembalian anda sebesar ", Nominal_awal, " adalah:")

//     // Proses perhitungan (Logic Greedy)
//     FOR (i = 0; i < Size; i++) DO
//         JumlahPecahan[i] = Kembalian DIV Nominal_uang[i]
//         Kembalian = Kembalian MOD Nominal_uang[i]
//     END FOR

//     // Proses Output
//     FOR (i = 0; i < Size; i++) DO
//         IF (JumlahPecahan[i] > 0) THEN
//             IF (Nominal_uang[i] >= 1000) THEN
//                 PRINT(JumlahPecahan[i], " Lembar ", Nominal_uang[i])
//             ELSE
//                 PRINT(JumlahPecahan[i], " Koin ", Nominal_uang[i])
//             END IF
//         END IF
//     END FOR
// END


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

