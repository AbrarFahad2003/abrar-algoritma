#include <iostream>
#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;
    char lagi;
    atas:
    std::cout << "Masukkan Bilangan = ";
    std::cin >> a;
    b = a % 2;
    printf("Nilai %d %% 2 adalah = %d\n", a, b);
    printf("\nIngin Hitung lagi [Y/T]: ");
    lagi = getch();
    if (lagi == 'Y' || lagi == 'y') {
        goto atas;
    }
    getch(); 
    return 0;
}
