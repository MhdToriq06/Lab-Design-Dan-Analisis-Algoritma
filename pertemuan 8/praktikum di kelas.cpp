#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> antrian;

    int opsi;
    do {
        cout << "1. Masukkan nomor peserta ke dalam antrian" << endl;
        cout << "2. Hapus nomor peserta terakhir dari antrian" << endl;
        cout << "3. Tampilkan semua nomor peserta dalam antrian" << endl;
        cout << "4. Keluar dari program antrian" << endl;
        cout << "Masukkan Opsi: ";
        cin >> opsi;

        switch (opsi) {
            case 1: {
                int nomor;
                cout << "Masukkan nomor peserta: ";
                cin >> nomor;
                antrian.push(nomor);
                cout << "Nomor peserta dalam antrian: ";
                queue<int> temp = antrian;
                while (!temp.empty()) {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << endl;
                break;
            }
            case 2: {
                if (!antrian.empty()) {
                    antrian.pop();
                } else {
                    cout << "Antrian kosong" << endl;
                }
                break;
            }
            case 3: {
                cout << "Nomor peserta dalam antrian: ";
                queue<int> temp = antrian;
                while (!temp.empty()) {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << endl;
                break;
            }
            case 4: {
                cout << "Keluar dari program antrian." << endl;
                break;
            }
            default: {
                cout << "Opsi tidak valid!" << endl;
                break;
            }
        }
    } while (opsi != 4);

    return 0;
}
