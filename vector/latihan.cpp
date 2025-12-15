#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> angka = {1, 7, 8};

    angka.push_back(5);
    angka.push_back(6);

    // Memasukkan angka 4 di awal dan di posisi kedua
    angka.insert(angka.begin(), 4);
    angka.insert(angka.begin() + 1, 4);

    cout << "Ukuran vektor = " << angka.size() << endl;

    for (int a : angka) {
        cout << a << " ";
    }

    return 0;
}
