#include <iostream>
#include <set>
using namespace std;
int main(){
    set <int> s; // это дерево как binary tree 
    s.insert(31);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    
    for(auto i = s.begin(); i!=s.end();i++){
        cout<<*i<<" "; 
    }
}