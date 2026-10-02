#include <stdio.h>

int main() {
    // Definisi variabel
    int a = 4;
    int b = 8;
    int c = 3;

    // Menghitung hasil dengan type casting agar menghasilkan nilai desimal
    float hasil = (float)(a * b) / c;

    // Menampilkan output
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Hasil dari a dikali b dibagi c adalah %f\n", hasil);

    return 0;
}