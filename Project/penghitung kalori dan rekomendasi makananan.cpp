#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// Fungsi BMR
double hitungBMR(string gender, int usia, double berat, double tinggi) {
    if (gender == "pria") {
        return 88.36 + (13.4 * berat) + (4.8 * tinggi) - (5.7 * usia);
    } else {
        return 447.6 + (9.2 * berat) + (3.1 * tinggi) - (4.3 * usia);
    }
}

// Fungsi kebutuhan kalori
double hitungKalori(double bmr, string aktivitas) {
    if (aktivitas == "ringan") {
        return bmr * 1.375;
    } else if (aktivitas == "sedang") {
        return bmr * 1.55;
    } else {
        return bmr * 1.725;
    }
}

// Fungsi BMI
double hitungBMI(double berat, double tinggi) {
    double tinggiMeter = tinggi / 100;
    return berat / (tinggiMeter * tinggiMeter);
}

// Fungsi kategori BMI
string kategoriBMI(double bmi) {
    if (bmi < 18.5) {
        return "Kurus";
    } else if (bmi < 25) {
        return "Normal";
    } else if (bmi < 30) {
        return "Gemuk";
    } else {
        return "Obesitas";
    }
}

// Fungsi daftar makanan
void tampilkanMakanan(string nama[], double kalori[], double protein[], double karbo[], double lemak[], int jumlah) {
    cout << endl << "=== DAFTAR MAKANAN ===" << endl;
    cout << "No  Nama Makanan             Kalori  Protein  Karbo   Lemak" << endl;
    cout << "---------------------------------------------------------------" << endl;
    
    for (int i = 0; i < jumlah; i++) {
        cout << i+1 << "   " << nama[i];
        
        int space = 25 - nama[i].length();
        for (int j = 0; j < space; j++) cout << " ";
        
        cout << kalori[i] << "    " << protein[i] << "      " 
             << karbo[i] << "     " << lemak[i] << endl;
    }
}

// Fungsi total kalori
double hitungTotalKalori(vector<int> pilihan, double kalori[]) {
    double total = 0;
    for (int i = 0; i < pilihan.size(); i++) {
        total += kalori[pilihan[i]];
    }
    return total;
}

// Fungsi total protein
double hitungTotalProtein(vector<int> pilihan, double protein[]) {
    double total = 0;
    for (int i = 0; i < pilihan.size(); i++) {
        total += protein[pilihan[i]];
    }
    return total;
}

// Fungsi total karbohidrat
double hitungTotalKarbo(vector<int> pilihan, double karbo[]) {
    double total = 0;
    for (int i = 0; i < pilihan.size(); i++) {
        total += karbo[pilihan[i]];
    }
    return total;
}

// Fungsi total lemak
double hitungTotalLemak(vector<int> pilihan, double lemak[]) {
    double total = 0;
    for (int i = 0; i < pilihan.size(); i++) {
        total += lemak[pilihan[i]];
    }
    return total;
}

// Fungsi rekomendasi menu
void rekomendasiMenu(double kalori) {
    cout << endl << "=== REKOMENDASI MENU ===" << endl;
    
    if (kalori < 1800) {
        cout << "Sarapan: Oatmeal + susu (300 kkal)" << endl;
        cout << "Siang: Nasi merah + ayam panggang + sayur (600 kkal)" << endl;
        cout << "Malam: Sup sayur + telur (400 kkal)" << endl;
        cout << "Camilan: Buah (150 kkal)" << endl;
    } else if (kalori < 2500) {
        cout << "Sarapan: Telur + roti gandum + susu (450 kkal)" << endl;
        cout << "Siang: Nasi + ayam + sayur + tahu (700 kkal)" << endl;
        cout << "Malam: Ikan + nasi merah + sayur (600 kkal)" << endl;
        cout << "Camilan: Yogurt (200 kkal)" << endl;
    } else {
        cout << "Sarapan: Nasi + telur + susu (500 kkal)" << endl;
        cout << "Siang: Nasi + daging + sayur + jus (800 kkal)" << endl;
        cout << "Malam: Ayam + kentang + sayur (700 kkal)" << endl;
        cout << "Camilan: Roti + buah (300 kkal)" << endl;
    }
}

// Fungsi tampilkan riwayat makanan harian
void tampilkanRiwayat(vector<string> tanggal, vector<double> totalKal, vector<double> targetKal) {
    if (tanggal.empty()) {
        cout << endl << "Belum ada riwayat." << endl;
        return;
    }
    
    cout << endl << "=== RIWAYAT ASUPAN ===" << endl;
    cout << "Tanggal        Total      Target     Status" << endl;
    cout << "---------------------------------------------" << endl;
    
    for (int i = 0; i < tanggal.size(); i++) {
        cout << tanggal[i] << "     " << totalKal[i] << "     " 
             << targetKal[i] << "     ";
        
        double selisih = totalKal[i] - targetKal[i];
        if (selisih > 200) {
            cout << "Kelebihan";
        } else if (selisih < -200) {
            cout << "Kekurangan";
        } else {
            cout << "Oke";
        }
        cout << endl;
    }
}

int main() {
    // Array makanan dan nutrisinya
    const int JUMLAH = 15;
    
    string namaMakanan[JUMLAH] = {
        "Nasi Putih", "Nasi Merah", "Ayam Goreng", "Ayam Panggang", 
        "Ikan Bakar", "Telur Rebus", "Tempe Goreng", "Tahu Goreng", 
        "Sayur Bayam", "Susu", "Roti Gandum", "Oatmeal", 
        "Pisang", "Apel", "Yogurt"
    };
    
    double kalori[JUMLAH] = {175, 150, 250, 200, 180, 70, 80, 70, 25, 130, 140, 150, 90, 50, 100};
    double protein[JUMLAH] = {3.5, 3, 25, 28, 30, 6, 7, 5, 2, 7, 6, 5, 1, 0.3, 10};
    double karbo[JUMLAH] = {40, 35, 0, 0, 0, 0.5, 5, 3, 4, 12, 25, 27, 23, 14, 12};
    double lemak[JUMLAH] = {0.3, 0.5, 15, 10, 7, 5, 4, 4, 0.3, 7, 2, 3, 0.3, 0.2, 2};
    
    // Vector buat nyimpan data
    vector<int> makananHariIni;
    vector<string> tanggalRiwayat;
    vector<double> totalKaloriRiwayat;
    vector<double> targetKaloriRiwayat;
    
    string gender, aktivitas;
    int usia;
    double berat, tinggi;


    
    cout << "================================================" << endl;
    cout << "     APLIKASI PENGHITUNG DAN PENCATATAN KALORI HARIAN" << endl;
    cout << "================================================" << endl;
    
    // Input data
    cout << "Jenis kelamin (pria/wanita): ";
    cin >> gender;
    cout << "Usia (tahun): ";
    cin >> usia;
    cout << "Berat badan (kg): ";
    cin >> berat;
    cout << "Tinggi badan (cm): ";
    cin >> tinggi;
    cout << "Aktivitas (ringan/sedang/berat): ";
    cin >> aktivitas;
    
    
    double bmr = hitungBMR(gender, usia, berat, tinggi);
    double kebutuhanKalori = hitungKalori(bmr, aktivitas);
    double bmi = hitungBMI(berat, tinggi);
    
    cout << endl << "================================================" << endl;
    cout << "             HASIL PERHITUNGAN" << endl;
    cout << "================================================" << endl;
    cout << setprecision(10);
    cout << "BMI: " << bmi << " (" << kategoriBMI(bmi) << ")" << endl;
    cout << "BMR: " << bmr << " kkal" << endl;
    cout << "Kebutuhan Kalori: " << kebutuhanKalori << " kkal/hari" << endl;
    cout << "Protein: " << (kebutuhanKalori * 0.20 / 4) << " gram" << endl;
    cout << "Karbohidrat: " << (kebutuhanKalori * 0.50 / 4) << " gram" << endl;
    cout << "Lemak: " << (kebutuhanKalori * 0.30 / 9) << " gram" << endl;
    
    // Menu
    int pilihan;
    do {
        cout << endl << "================================================" << endl;
        cout << "                 MENU UTAMA" << endl;
        cout << "================================================" << endl;
        cout << "1. Lihat Daftar Makanan" << endl;
        cout << "2. Catat Makanan Hari Ini" << endl;
        cout << "3. Lihat Ringkasan Hari Ini" << endl;
        cout << "4. Rekomendasi Menu" << endl;
        cout << "5. Lihat Riwayat" << endl;
        cout << "6. Reset Data Hari Ini" << endl;
        cout << "0. Keluar" << endl;
        cout << endl << "Pilih menu: ";
        cin >> pilihan;
        
        if (pilihan == 1) {
            tampilkanMakanan(namaMakanan, kalori, protein, karbo, lemak, JUMLAH);
            
        } else if (pilihan == 2) {
            tampilkanMakanan(namaMakanan, kalori, protein, karbo, lemak, JUMLAH);
            cout << endl << "Masukkan nomor makanan (0 = selesai): ";
            int nomor;
            
            while (true) {
                cin >> nomor;
                if (nomor == 0) break;
                
                if (nomor >= 1 && nomor <= JUMLAH) {
                    makananHariIni.push_back(nomor - 1);
                    cout << namaMakanan[nomor-1] << " ditambahkan!" << endl;
                    cout << "Tambah lagi (0 = selesai): ";
                } else {
                    cout << "Nomor salah! Coba lagi: ";
                }
            }
            
        } else if (pilihan == 3) {
            if (makananHariIni.empty()) {
                cout << endl << "Belum ada data." << endl;
            } else {
                double totKal = hitungTotalKalori(makananHariIni, kalori);
                double totPro = hitungTotalProtein(makananHariIni, protein);
                double totKar = hitungTotalKarbo(makananHariIni, karbo);
                double totLem = hitungTotalLemak(makananHariIni, lemak);
                
                cout << endl << "=== RINGKASAN HARI INI ===" << endl;
                cout << endl << "Makanan yang dimakan:" << endl;
                
                for (int i = 0; i < makananHariIni.size(); i++) {
                    cout << i+1 << ". " << namaMakanan[makananHariIni[i]] << endl;
                }
                
                cout << endl << "Total Nutrisi:" << endl;
                cout << "Kalori: " << totKal << " / " << kebutuhanKalori << " kkal" << endl;
                cout << "Protein: " << totPro << " gram" << endl;
                cout << "Karbohidrat: " << totKar << " gram" << endl;
                cout << "Lemak: " << totLem << " gram" << endl;
                
                double persen = (totKal / kebutuhanKalori) * 100;
                cout<< setprecision(10);
                cout << endl << "Status: " << persen << "% dari target" << endl;
                
                if (persen > 110) {
                    cout << "Kelebihan kalori!" << endl;
                } else if (persen < 90) {
                    cout << "Masih kurang " << (kebutuhanKalori - totKal) << " kkal." << endl;
                } else {
                    cout << "Sudah sesuai target!" << endl;
                }
            }
            
        } else if (pilihan == 4) {
            rekomendasiMenu(kebutuhanKalori);
            
        } else if (pilihan == 5) {
            tampilkanRiwayat(tanggalRiwayat, totalKaloriRiwayat, targetKaloriRiwayat);
            
        } else if (pilihan == 6) {
            if (!makananHariIni.empty()) {
                double totKal = hitungTotalKalori(makananHariIni, kalori);
                double totPro = hitungTotalProtein(makananHariIni, protein);
                double totKar = hitungTotalKarbo(makananHariIni, karbo);
                double totLem = hitungTotalLemak(makananHariIni, lemak);
                
                string tanggal;
                cout << endl << "Tanggal (cth: 07-12-2024): ";
                cin >> tanggal;
                
                tanggalRiwayat.push_back(tanggal);
                totalKaloriRiwayat.push_back(totKal);
                targetKaloriRiwayat.push_back(kebutuhanKalori);
                
                cout << "Data disimpan!" << endl;
            }
            makananHariIni.clear();
            cout << "Data hari ini direset." << endl;
            
        } else if (pilihan == 0) {
            cout << endl << "Terima kasih!" << endl;
            
        } else {
            cout << endl << "Pilihan salah!" << endl;
        }
        
    } while (pilihan != 0);
    
    return 0;
}