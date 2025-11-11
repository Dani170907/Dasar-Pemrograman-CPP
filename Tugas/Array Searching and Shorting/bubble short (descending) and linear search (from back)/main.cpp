#include <iostream>
using namespace std;

int main () {
   int nilai[] = {85, 72, 90, 65, 88, 92, 78, 95, 70, 83};
   int n = sizeof(nilai) / sizeof(nilai[0]);
   int cari = 88;

   // Bubble short Descending
   for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
         if (nilai[j] < nilai[j + i]) 
         {
            int temp = nilai[j];
            nilai[j] = nilai[j + 1];
            nilai[j + 1] = temp;
         }
         
      }
   }
   cout << "Hasil Bubble Sort (Descending): ";
   for (int i = 0; i < n; i++) {
      cout << nilai[i] << " ";
   }
   cout << endl;

   // Linear Search dari Belakang
   int posisi = -1; 
   for (int i = n - 1; i >= 0; i--)
   {
      if (nilai[i] == cari) {
         posisi = i;
         break;
      }
   }
   cout << "Mencari nilai " << cari << " ..." << endl;
   if (posisi != -1) 
      cout << "Ditemukan di indeks ke-" << posisi << endl;
   else 
      cout << "Tidak ditemukan." << endl; 
   
   return 0;
}