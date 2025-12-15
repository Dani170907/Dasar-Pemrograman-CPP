#include <iostream>
#include <string>
using namespace std;

int main () {
   string nama;
   int umur;
   float tinggi;

   cout << "Masukkan Nama: ";
   cin >> nama;

   cout << "Masukkan Umur: ";
   cin >> umur;

   cout << "Masukkan Tinggi: ";
   cin >> tinggi;

   cout << "\n=== BIODATA ===" << endl;
   cout << "Nama: " << nama << endl;
   cout << "Umur: " << umur << endl;
   cout << "Tinggi: " << tinggi << endl;

   return 0;
}