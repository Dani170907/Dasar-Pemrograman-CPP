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

