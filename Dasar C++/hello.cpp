#include <iostream>
using namespace  std;

int main () {
   cout << "Hello, C++" << endl;
   return 0;
}

// Line 1:  #include <iostream>
// Preprocessor directive untuk menyertakan header file
// iostream  = Input Output Stream
// Berisi definisi  cout ,  cin ,  endl
// Harus ada jika kita ingin melakukan input/output

// Line 2:  using namespace std;
// Namespace adalah cara mengelompokkan kode
// std  = standard library namespace
// Tanpa ini, kita harus menulis  std::cout  dan  std::endl
// Mempermudah penulisan kode

// Tanpa using namespace std
// #include <iostream>
// int main() {
//     std::cout << "Hello World!" << std::endl;
//     return 0;
// }

// Line 4:  int main() {
// main()  = entry point program (titik mulai eksekusi)
// Setiap program C++ HARUS memiliki fungsi main()
// int  = main() mengembalikan nilai integer ke sistem operasi
// {}  = curly braces menandai blok kode

// Line 5:  cout << "Hello World!" << endl;
// cout  = Console Output (untuk menampilkan ke layar)
// <<  = insertion operator (memasukkan data ke output stream)
// "Hello World!"  = string literal yang akan ditampilkan
// endl  = end line (pindah baris + flush buffer)
// ;  = semicolon mengakhiri setiap statement

// Line 6:  return 0;
// Mengembalikan nilai 0 ke sistem operasi
// 0 = program berhasil dijalankan
// Non-zero = ada error dalam program
// Wajib ada karena main() bertipe  int  (akan ditambahkan otomatis oleh compiler mulai versi C++ 2003)
// // Contoh program dengan multiple output
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Baris pertama" << endl;
//     cout << "Baris kedua" << endl;
//     cout << "Angka: " << 123 << endl;
//     return 0;
// }
// Output:
// Baris pertama
// Baris kedua
