#include <stdio.h>

int main() {
    // Definisi variabel putaran dan jarak
    int putaran = 5;
    int jarak = 14;

    // Nilai pi
    float pi = 3.141592653589793;

    // Menghitung keliling 1 putaran dan jari-jari lingkaran
    float keliling = (float)jarak / putaran;
    float jari_jari = keliling / (2 * pi);

    // Menampilkan output
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}