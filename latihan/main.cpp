#include <iostream>
using namespace std;

int main() {
   double kebersihan = 4.8;
   double pelayanan = 4.5;
   double lokasi = 4.2;
   double harga = 3.8;

   double bobot_kebersihan = 0.3;
   double bobot_pelayanan = 0.3;
   double bobot_lokasi = 0.2;
   double bobot_harga = 0.2;

   double skor_akhir = (kebersihan * bobot_kebersihan) + (pelayanan * bobot_pelayanan) + (lokasi * bobot_lokasi) + (harga * bobot_harga);

   string rating;
   if (skor_akhir >= 4.5) {
      rating = "bintang 5 (excellent)";
   }else if (skor_akhir >= 3.5) {
      rating = "bintang 4(very good)";
   }else if (skor_akhir >= 2.5) {
      rating = "bintang 3(good)";
   }else if (skor_akhir >= 1.5) {
      rating = "bintang 2(fair)";
   }else {
      rating = "bintang 1(poor)";
   }

   cout << "=== evaluasi hotel ===" << endl;
   cout << "kebershan " << kebersihan << "(bobot 30%)" << endl;
   cout << "pelayanan " << pelayanan << "(bobot 30%)" << endl;
   cout << "lokasi " << lokasi << "(bobot 20%)" << endl;
   cout << "harga " << harga << "(bobot 20%)" << endl;
   cout << "---" <<  endl;
   cout << "skor akhir: " << skor_akhir << endl;
   cout << "rating: " << rating << endl;

   return 0;
}