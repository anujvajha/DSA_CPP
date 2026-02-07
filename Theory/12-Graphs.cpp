#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph 
{
    int v;
    list<int> *arr;   // int* arr ( int -> list<int> )

    public:
    Graph(int vertices)
    {
        v = vertices;
        arr = new list<int>[v];
    }

    void addEdge (int u, int v) 
    {
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    // O(V+E) V = vertices / E = edges
    void printList ()
    {
        for(int i=0; i<v; i++)
        {
            cout << i << ": ";
            for(int n : arr[i])
            {
                cout << n << " ";
            }
            cout << endl;
        }
    }
};

int main ()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.printList();

}