#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);//[1]
    l.push_front(2);//[2,1]
    // cout<<l[0]; it ' s not work for list list is like linked list works


    l.remove(1);
    l.erase(l.begin());
    l.pop_back();
    l.pop_front();
    l.insert(l.begin(),1);

    for(auto i = l.begin() ; i!=l.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}