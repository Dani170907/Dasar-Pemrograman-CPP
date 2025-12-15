#include <iostream>
#include <vector>
using namespace std;

// Deklarasi fungsi
void tampilMenu();
void inputData(vector<string> &nama, vector<double> &nilai);
void tampilData(vector<string> nama, vector<double> nilai);
double hitungRataRata(vector<double> nilai);
void cariTertinggi(vector<string> nama, vector<double> nilai);
void tampilLulus(vector<string> nama, vector<double> nilai);

int main() {
    vector<string> nama;
    vector<double> nilai;
    int pilihan;

    do {
        tampilMenu();
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                inputData(nama, nilai);
                break;
            case 2:
                tampilData(nama, nilai);
                break;
            case 3:
                cout << "Rata-rata nilai kelas: " << hitungRataRata(nilai) << endl;
                break;
            case 4:
                cariTertinggi(nama, nilai);
                break;
            case 5:
                tampilLulus(nama, nilai);
                break;
            case 0:
                cout << "Keluar program..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
        cout << endl;
    } while(pilihan != 0);

    return 0;
}

// Fungsi tampil menu
void tampilMenu() {
    cout << "===== MENU =====" << endl;
    cout << "1. Input Data Mahasiswa" << endl;
    cout << "2. Tampilkan Semua Data" << endl;
    cout << "3. Hitung Rata-Rata Nilai" << endl;
    cout << "4. Cari Nilai Tertinggi" << endl;
    cout << "5. Tampilkan Mahasiswa Lulus" << endl;
    cout << "0. Keluar" << endl;
}

// Fungsi input data
void inputData(vector<string> &nama, vector<double> &nilai) {
    int jumlah;
    string n;
    double nil;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;
    
    for(int i = 0; i < jumlah; i++) {
        cout << "Nama mahasiswa ke-" << i+1 << ": ";
        cin >> n;
        cout << "Nilai: ";
        cin >> nil;

        // Validasi nilai
        if(nil < 0 || nil > 100) {
            cout << "Nilai tidak valid, masukkan ulang!" << endl;
            i--;
        } else {
            nama.push_back(n);
            nilai.push_back(nil);
        }
    }
}

// Fungsi tampil data
void tampilData(vector<string> nama, vector<double> nilai) {
    if(nama.empty()) {
        cout << "Belum ada data!" << endl;
        return;
    }

    cout << "===== DATA MAHASISWA =====" << endl;
    for(int i = 0; i < nama.size(); i++) {
        cout << i+1 << ". " << nama[i] << " - Nilai: " << nilai[i] << endl;
    }
}

// Fungsi hitung rata-rata
double hitungRataRata(vector<double> nilai) {
    if(nilai.empty()) return 0;
    
    double total = 0;
    for(double n : nilai) total += n;
    return total / nilai.size();
}

// Fungsi cari nilai tertinggi
void cariTertinggi(vector<string> nama, vector<double> nilai) {
    if(nilai.empty()) {
        cout << "Belum ada data!" << endl;
        return;
    }

    int indexMax = 0;
    for(int i = 1; i < nilai.size(); i++) {
        if(nilai[i] > nilai[indexMax]) indexMax = i;
    }

    cout << "Mahasiswa dengan nilai tertinggi: " << endl;
    cout << nama[indexMax] << " - " << nilai[indexMax] << endl;
}

// Fungsi tampil lulus
void tampilLulus(vector<string> nama, vector<double> nilai) {
    if(nilai.empty()) {
        cout << "Belum ada data!" << endl;
        return;
    }

    cout << "===== MAHASISWA LULUS (>=60) =====" << endl;
    bool ada = false;
    for(int i = 0; i < nilai.size(); i++) {
        if(nilai[i] >= 60) {
            cout << nama[i] << " - " << nilai[i] << endl;
            ada = true;
        }
    }
    if(!ada) cout << "Tidak ada mahasiswa yang lulus." << endl;
}
