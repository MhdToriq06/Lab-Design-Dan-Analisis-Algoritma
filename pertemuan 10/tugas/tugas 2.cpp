#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int num_cities;
  cout << "Masukkan Jumlah Kota: ";
  cin >> num_cities;

  
  vector<vector<int> > cost_matrix(num_cities, vector<int>(num_cities, 0));

 
  cout << "Nilai Cost Matrix\n";
  for (int i = 0; i < num_cities; ++i) {
    cout << "Cost Element Baris ke-: " << i + 1 << endl;
    for (int j = 0; j < num_cities; ++j) {
      cin >> cost_matrix[i][j];
    }
  }

  
  vector<int> cost_list;
  cout << "Cost List:\n";
  for (int i = 0; i < num_cities; ++i) {
    for (int j = 0; j < num_cities; ++j) {
      if (cost_matrix[i][j] != 0) {
        cost_list.push_back(cost_matrix[i][j]);
        cout << cost_matrix[i][j] << endl;
      }
    }
  }

  int min_cost = INT_MAX;
  vector<int> min_path;

  vector<int> current_path;
  current_path.push_back(0);
  for (int i = 1; i < num_cities; ++i) {
    current_path.push_back(i);
  }
  current_path.push_back(0);

  do {
    int total_cost = 0;
    for (int i = 0; i < num_cities; ++i) {
      total_cost += cost_matrix[current_path[i]][current_path[i + 1]];
    }

    if (total_cost < min_cost) {
      min_cost = total_cost;
      min_path = current_path;
    }
  } while (next_permutation(current_path.begin() + 1, current_path.end()));

  // Menampilkan jalur terpendek dan minimum cost
  cout << "Jalur Terpendek: ";
  for (int i = 0; i < num_cities + 1; ++i) {
    cout << min_path[i] + 1;
    if (i < num_cities) {
      cout << "-->";
    }
  }
  cout << endl;

  cout << "Minimum Cost : " << min_cost << endl;

  return 0;
}
