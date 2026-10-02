#include <stdio.h>

int main() {
    // Definisi variabel pasukan dan array nama-nama pahlawan
    int pasukan_yu_zhong = 958730;
    char *pahlawan[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};

    // Menghitung jumlah pahlawan dari array dan pasukan per pahlawan
    int jumlah_pahlawan = sizeof(pahlawan) / sizeof(pahlawan[0]);
    int pasukan_per_pahlawan = pasukan_yu_zhong / jumlah_pahlawan;

    // Menampilkan output
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan_yu_zhong);
    printf("Jumlah pahlawan = %d\n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_per_pahlawan);

    return 0;
}