#include <iostream>
#include <vector>

using namespace std;
int n,m;
vector <int> answer;
vector <vector <int> > g(1000000);
vector <bool> used(1000000);
void DFS(int start){
    used[start] = true;
    for(size_t i=0;i<g[start].size();i++){
        if(used[g[start][i]]==false){
            DFS(g[start][i]);
        }
    }
    answer.push_back(start);
}
void TPSort(){
    for (int i=0; i<n; ++i){
        used[i] = false;
    }
    answer.clear();
    for(int i=0;i<n;i++){
        if(used[i]==false){
            DFS(i);
        }
    }
    reverse(answer.begin(),answer.end());
}



int main(){
    // freopen("input.txt","r",stdin);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        // x--;
        // y--;
        g[x].push_back(y);
        // g[y].push_back(x);
    }
    // DFS(0);
    TPSort();
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]+1<<" ";
    }

    // for(int i=0;i<g.size();i++){
    //     cout<<i+1<<": ";
    //     for(int j=0;j<g[i].size();j++){
    //         cout<<g[i][j]+1<<" ";
    //     }
    //     cout<<endl;

    // }



}