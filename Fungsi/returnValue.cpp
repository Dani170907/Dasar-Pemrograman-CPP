#include <iostream>
using namespace std;

int pertambahan(int x, int y) {
   return x + y;
}
int main () {
   // 1. simpan dalam variabel
   int hasil = pertambahan(10, 10);
   cout << "Hasil: " << hasil << endl;

   // 2. langsung tampilkan 
   cout << "Hasil: " << pertambahan(20, 20) << endl;

   // 3. gunakan dalam ekspresi/operasi
   int total = pertambahan(40, 40) + pertambahan(10, 10);
   cout << "Total: " << total << endl;

   // gunakan dalam kondisi
   if (pertambahan(100, 100) >= 200)
   {
      cout << "Hasil lebih dari sama dengan 200" << endl;
   }
   

   return 0;
}