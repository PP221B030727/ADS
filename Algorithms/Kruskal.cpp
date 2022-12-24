// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int cost = 0;
// vector <pair< int, pair <int,int> > > g;
// vector < pair<int,int> > res;
// int n,m;

// void Kruskal(){
//     sort (g.begin(), g.end());
//     vector<int> tree_id(n);
//     for (int i=0; i<n; ++i){
//         tree_id[i] = i;
//     }
     
//     for (int i=0; i<m; ++i)
//     {
// 	    int a = g[i].second.first,  b = g[i].second.second,  l = g[i].first;
// 	    if (tree_id[a] != tree_id[b]){
// 		    cost += l;
// 		    res.push_back (make_pair (a, b));
// 		    int old_id = tree_id[b],  new_id = tree_id[a];
// 		    for (int j=0; j<n; ++j){
// 			    if (tree_id[j] == old_id){
//                     tree_id[j] = new_id;
//                 }
//                 // cout<<tree_id[j]<<" ";
//             }	    
//             // cout<<endl;
// 	    }
//     }
// }




// int main(){
//     freopen("input.txt","r",stdin);
//     cin>>n>>m;
//     for(int i=0;i<m;i++){
//         int x,y,z;cin>>z>>x>>y;//вес , вершина 1 , вершина 2
//         g.push_back(make_pair(z,make_pair(x,y)));
//     }


//     Kruskal();

//     // for(int i=0;i<g.size();i++){
//     //     cout<<g[i].first<<" "<<g[i].second.first<<" "<<g[i].second.second<<endl;
//     // }
//     cout<<cost<<endl;
//     for(int i=0;i<res.size();i++){
//         cout<<res[i].first<<" "<<res[i].second<<endl;
//     }


//     return 0;
// }




#include <iostream>
#include <vector>
using namespace std;
int n,m;
int cst=0;
vector <pair<int,pair<int , int> > > g;
vector <pair<int , int> > ans;
void Kruskal(){
    sort(g.begin(),g.end());
    vector <int> tree_id;
    for(int i=0;i<n;i++){
        tree_id.push_back(i);
    }
    for(int i=0;i<m;i++){
        int x = g[i].second.first;
        int y = g[i].second.second;
        int w = g[i].first;
        if(tree_id[x]!=tree_id[y]){
            ans.push_back(make_pair(x,y));
            cst+=w;
            for(int j=0;j<n;j++){
                if(tree_id[j]==tree_id[y]){
                    tree_id[j] = tree_id[x];
                }
            }
        }
    }

}





int main(){
    freopen("input.txt","r",stdin);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int w,x,y;cin>>w>>x>>y;
        g.push_back(make_pair(w,make_pair(x,y)));
    }
    // for(int i=0;i<g.size();i++){
    //     cout<<g[i].first<<" "<<g[i].second.first<<" "<<g[i].second.first<<endl;
    // }

    Kruskal();
    cout<<cst<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }

    return 0;

}