#include <stdio.h>

int main() {
    // Definisi variabel
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    // Menghitung total sisa bagi (modulus)
    int total_sisa_bagi = (a % b) + (x % y);

    // Menampilkan output
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_sisa_bagi);

    return 0;
}