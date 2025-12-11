// Adjacency List

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    int vertex, edge, weight;
    cin >> vertex >> edge;
    vector<pair<int,int>> adjList[vertex];
    int u, v;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v >> weight;
        adjList[u].push_back(make_pair(v, weight));
        adjList[v].push_back(make_pair(u, weight));
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j].first << " " << adjList[i][j].second << " ";
        }
        cout << endl;
    }
}