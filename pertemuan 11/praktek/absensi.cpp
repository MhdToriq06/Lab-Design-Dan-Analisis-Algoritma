#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
private :
    int jumlahsimpul;
    vector<vector<int > > adjList;
  

public : 
    Graph(int simpul) {
        jumlahsimpul = simpul ;
        adjList.resize(simpul);
    }

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src); // untuk graf tidak berarah
    }

    void printGraph() {
        for (int i = 0; i < jumlahsimpul; ++i) {
            cout << "Simpul " << i << ": ";
            for (int j = 0; j < adjList[i].size(); ++j) {
                cout << adjList[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph graph(5);
    queue<pair<int, int> >edges;

    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

while(!edges.empty() ) {
 pair<int, int>edge=edges.front();
 graph.addEdge(edge.first,edge.second);
 edges.pop();
}
 cout<<"Graf dengan daftar adjasi :"<<endl;
    graph.printGraph();

    return 0;
}
