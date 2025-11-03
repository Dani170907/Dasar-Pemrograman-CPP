#include <iostream>
using namespace std;

int main() {
    int angka[] = {10, 20, 30, 40, 50};
    int n = 2; // jumlah pergeseran
    int panjang = sizeof(angka) / sizeof(angka[0]);

    cout << "Array sebelum digeser: ";
    for (int i = 0; i < panjang; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    // Geser ke kanan sebanyak n kali
    for (int i = 0; i < n; i++) {
        int temp = angka[panjang - 1]; // simpan elemen terakhir
        for (int j = panjang - 1; j > 0; j--) {
            angka[j] = angka[j - 1];   // geser elemen ke kanan
        }
        angka[0] = temp; // elemen terakhir pindah ke depan
    }

    cout << "Array setelah digeser: ";
    for (int i = 0; i < panjang; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    return 0;
}
