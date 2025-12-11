// Adjacency Matrix

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex, e;
    cin >> vertex >> e;
    int u,v;
    vector<vector<bool>> adj(vertex, vector<bool>(vertex, 0));

    for(int i=0; i<e; i++){
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    } 

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> number(4,vector<int>(4, 0));

}