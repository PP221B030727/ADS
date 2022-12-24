#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int INF = 100000000;
int n,m;
vector <vector <int> > g; 
void BFS(int start){//BREADTH FIRST SEARCH 
    queue <int> Q;
    vector <bool> used(n,false);
    vector <int> d(n,INF);
    vector <int> p(n,INF);
    Q.push(start);
    used[start] = true;
    d[start] = 0;
    p.push_back(start);
    while (Q.size()>0)
    {
        int value = Q.front();
        Q.pop();
        for(int i=0;i<g[value].size();i++){
            if(used[g[value][i]]==false){
                used[g[value][i]] = true;
                d[g[value][i]] = d[value]+1;//сколько шаков храниться 
                p[g[value][i]] = value;//предки вершин 
                Q.push(g[value][i]);
            }
        }
    }
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}





int main(){
    freopen("input.txt","r",stdin);
    cin>>n>>m;
    g.resize(n);
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    BFS(1);

    // for(int i=0;i<g.size();i++){
    //     cout<<i+1<<": ";
    //     for(int j=0;j<g[i].size();j++){
    //         cout<<g[i][j]+1<<" ";
    //     }
    //     cout<<endl;
    // }

    



}