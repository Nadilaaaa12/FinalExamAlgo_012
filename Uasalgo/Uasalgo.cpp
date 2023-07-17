#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 100;


void tambahMahasiswa() {
    if (jumlahMahasiswa >= MAX_MAHASISWA) {
        cout << "Kapasitas maksimum." << endl;
        return;
    }
}

void tampilkanSemuaMahasiswa();

void algorithmacariMahasiswaByNIM();

void algorithmaSortByTahunMasuk();

int main() {
    int pilihan;
    do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
        case 1:
            tambahMahasiswa();
            break;
        case 2:
            tampilkanSemuaMahasiswa();
            break;
        case 3:
            algorithmacariMahasiswaByNIM();
            break;
        case 4:
            algorithmaSortByTahunMasuk();
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);
    return 0;
}
    
 //2. Saya menggunakan algoritma Bubblesort dengan menambahkan mahasiswa selanjutnya menampilkan mahasasiwa lalu,mencari mahasiswa berdasarkan NIM dan terakhir menampilkan mahasiswa berdasarkan tahun masuk secara berurut.
//3. Kalau stack itu elemen yg terakhir dimasukkan kedalam stack dan akan menjadi elemem pertama yg digunakan.Kalau queue itu elemen yang pertama dimasukkan ke dalam queue dan akan menjadi elemen pertama yang dikeluarkan
//4. Algorithma stack itu digunakan kita ingin mengimplementasikan operasi LIFO Last In, First Out atau Stack.



