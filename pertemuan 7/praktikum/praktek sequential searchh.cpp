#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string nama;
    int harga;
};

int main() {
    Barang daftarBarang[5] = {
        {"Buku", 5000},
        {"Pensil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500},
    };

    string namaBarang;
    cout << " Masukkan nama barang yang ingin dicari : ";
    cin >> namaBarang;

    bool ketemu = false;
    for (int i = 0; i < 5; i++) {
        if (daftarBarang[i].nama==namaBarang) {
            cout << " Barang " << namaBarang << " ditemukan dengan harga Rp : " << daftarBarang[i].harga << endl;
            ketemu = true;
            break;
        }
    }

    if (!ketemu) {
        cout << " Maaf, barang " << namaBarang << " tidak ditemukan dalam daftar" << endl;
    }

    return 0;
}

