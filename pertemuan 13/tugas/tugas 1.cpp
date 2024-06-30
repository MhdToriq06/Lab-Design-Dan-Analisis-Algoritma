#include <iostream>
using namespace std;

int table[10];

void init() {
    for (int i = 0; i < 10; i++) {
        table[i] = 0; 
    }
}

int double_hash(int z, int i) {
    int hash1 = z % 10;
    int hash2 = 7 - (z % 7);
    int x = (hash1 + i * hash2) % 10; 
    return x;
}
int main() {
    init();
    cout << "Masukan 7 angka : ";

    for (int i = 0; i < 7; i++) {
        int a;
        cin >> a;
        int b = a % 10;
		int j=0;
		
        while (table[b] != 0) {
            b = double_hash(a, ++j);
        }
            table[b] = a; 
        
    }

    cout << "Isi hash table adalah" << endl;
    for (int j = 0; j < 10; j++) {
        cout << j << " == " << table[j] << endl;
    }


}


