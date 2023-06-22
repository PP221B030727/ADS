#include <iostream>
#include <set>
using namespace std;
struct comparator{
    bool operator()(const int &a , const int &b) const{
        return b < a;
    }
};

int main(){
    set <int , comparator> s; // это дерево как binary tree 
    s.insert(31);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    
    for(auto i = s.begin(); i!=s.end();i++){
        cout<<*i<<" "; 
    }
}