#include <iostream>
#include <vector>

using namespace std;

struct Edge {
    int tujuan;
    int berat;
};

struct Node {
    int id;
    vector<Edge> listbaris;
};

void tampilkan(const vector<Node>& graf) {
    cout << "Daftar Ketetanggaan (Graf Berbobot):" << endl;
    for (size_t i = 0; i < graf.size(); ++i) {
        const Node& node = graf[i];
        cout << "Simpul " << node.id << " :";
        for (size_t j = 0; j < node.listbaris.size(); j++) {
            const Edge& edge = node.listbaris[j];
            cout << " -> (" << edge.tujuan << ", " << edge.berat << ")";
        }
        cout << endl;
    }
}

int main() {
    int jumlahSimpul = 5;
    vector<Node> graf(jumlahSimpul);

    for (int i = 0; i < jumlahSimpul; i++) {
        graf[i].id = i;
    }

    graf[0].listbaris.push_back({1, 10});
    graf[0].listbaris.push_back({4, 20});

    graf[1].listbaris.push_back({2, 30});
    graf[1].listbaris.push_back({3, 40});
    graf[1].listbaris.push_back({4, 50});

    graf[2].listbaris.push_back({3, 60});

    graf[3].listbaris.push_back({4, 70});

    tampilkan(graf);

    return 0;
}

