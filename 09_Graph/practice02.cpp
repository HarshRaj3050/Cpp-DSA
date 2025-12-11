// Adjacency List

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex, edge;
    cin>>vertex>>edge;
    vector<int> adjList[vertex];
    int u,v;
    for(int i=0; i<edge; i++){
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i=0; i<vertex; i++){
        cout<<i<<" -> ";
        for(int j=0; j<adjList[i].size(); j++){
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }
}