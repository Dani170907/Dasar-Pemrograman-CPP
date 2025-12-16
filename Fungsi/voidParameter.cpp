#include <iostream>
using namespace std;

// Fungsi dengan 1 parameter
void sapa(string nama) {
   cout << "Halo, " << nama << "!" << endl;
   cout << "Selamat datang di program kami" << endl;
}

// Fungsi dengan 2 parameter
void tampilNilai(string mataKuliah, int nilai) {
   cout << "Mata Kuliah: " << mataKuliah << endl;
   cout << "Nilai: " << nilai << endl;
}

int main () {
   sapa("Dani Ramadhan");
   sapa("Fadhil");

   tampilNilai("Dasar Pemrograman", 85);
   tampilNilai("PAI", 95);

   return 0;
}