#include <iostream>
#include <string>
using namespace std;

int main () {
   string namaLengkap;
   int umur;
   float tinggi;

   cout << "Masukkan Nama: ";
   getline(cin, namaLengkap);

   cout << "Masukkan Umur: ";
   cin >> umur;

   cout << "Masukkan Tinggi (dalam cm): ";
   cin >> tinggi;

   cout << "\n=== BIODATA ===" << endl;
   cout << "Nama: " << namaLengkap << endl;
   cout << "Umur: " << umur << endl;
   cout << "Tinggi: " << tinggi << endl;

   return 0;
}

// Penting untuk diingat:
// cin  berhenti membaca saat bertemu spasi atau enter
// Untuk input string dengan spasi, gunakan  getline(cin, variabel)
// Selalu deklarasikan variabel sebelum menggunakan  cin
