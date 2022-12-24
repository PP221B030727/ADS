#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n,m;
vector <vector <int> > g; 
vector <bool> used;



void DFS(int start){
    used[start] = true;
    for(int i=0;i<g[start].size();i++){
        if(used[g[start][i]]==false){
            DFS(g[start][i]);
        }
    }
}
//Находим компоненты связанности 






int main(){
    freopen("input.txt","r",stdin);
    cin>>n>>m;
    g.resize(n);
    used.resize(n,false);
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    DFS(0);

    for(int i=0;i<used.size();i++){
        cout<<used[i]<<" ";
    }

    // for(int i=0;i<g.size();i++){
    //     cout<<i+1<<": ";
    //     for(int j=0;j<g[i].size();j++){
    //         cout<<g[i][j]+1<<" ";
    //     }
    //     cout<<endl;
    // }



    return 0;
}