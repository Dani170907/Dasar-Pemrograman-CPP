#include <iostream>
using namespace std;

int pertambahan (int x, int y) {
   return x + y;
}

int pengurangan (int x, int y) {
   return x - y;
}

int perkalian (int x, int y) {
   return x * y;
}

int pembagian (int x, int y) {
   return x / y;
}

void hasil (int result) {
   cout << "Hasilnya adalah: " << result << endl;
}

int main () {
   int tambah = pertambahan(10, 10);
   int kurang = pengurangan(15, 5);
   int kali = perkalian(5, 15);
   int bagi = pembagian(10, 10);

   hasil(tambah);
   hasil(kurang);
   hasil(kali);
   hasil(bagi);

   // int x = 5;
   // int y = 15;
   // int pertambahan = x + y;
   // int pengurangan = x - y;

   // cout << tambah << endl;
   // cout << kurang;

   return 0;
}
