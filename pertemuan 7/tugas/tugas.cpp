#include <iostream> 
#include <string>
using namespace std; 

struct perpus{
	string rak;
	string judul;
};

int binarySearch(const perpus info[], string x, int n) 
{ 
	int l = 0; 
	int r = n - 1; 

	while (l <= r) { 
		int m = l + (r - l) / 2; 
	
		if (x == info[m].judul){
			return m; 
		}
		if (x > info[m].judul){
			l = m + 1; 
		}else{
			r = m - 1;
		}
	} 

	return -1; 
} 

int main() { 	
	string x; 
	perpus info[] = { 
	{"Rak 1","Sangkuriang"},{"Rak 2","Matematika"},{"Rak 3","Milea"},{"Rak 4","Algoritma" },{"Rak 5","Biologi"},
	}; 
	cout<<"Silahkan masukan judul buku yang ingin dicari :";
	cin>>x;
	int n = 10; 
	int result = binarySearch(info, x, n); 
	if (result == -1) {
		cout << "Judul buku yang dicari tidak ditemukan"; 
	}else{
		cout << "Buku yang berjudul " <<info[result].judul<<" ditemukan pada " <<info[result].rak;
	}
} 
