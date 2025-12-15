#include <iostream>
using namespace std;

int main () {
   int umur = 18;
   string namaLengkap = "Dani Ramadhan";

   cout << "Nama: " << namaLengkap << endl;
   cout << "Umur: " << umur << " Tahun" << endl;
   cout << "Selamat datang di mata kuliah Dasar Pemrograman" << endl;

   return 0;
}

// cout  = Console Output
// Digunakan untuk menampilkan data ke layar
// Bagian dari namespace  std
// Menggunakan operator  <<  (insertion operator)

// endl  vs  \n :
// endl  = end line + flush buffer (memastikan output langsung tampil)
// \n  = new line saja (lebih cepat)
// Untuk pemula, gunakan  endl  untuk memastikan output tampil