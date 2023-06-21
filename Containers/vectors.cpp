#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1); //[1]
    v.push_back(2); // [1,2]
    v.pop_back();//[1] 

    v.resize(10);
    v.reserve(14);
    v.insert(v.begin(), 3);
    v.insert(v.begin()+6, 3);

    v.erase(v.begin()+6);

    v[0] = 312;
    cout<<"Capasity : "<<v.capacity()<<"\n";
    cout<<"Size : "<<v.size()<<"\n";


    // reverse(v.begin() , v.end());
    for(int i = 0 ; i < v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';
    for(auto i = v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<'\n';
    vector <int> :: iterator it = v.begin();
    for(;it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<'\n';

    return 0;
}
