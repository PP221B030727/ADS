#include <iostream>
using namespace std;
int main(){
    array <int,12> arr;
    // нету понятия capasity
    cout<<arr.size()<<"\n";
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 4;
    for(auto it = arr.begin() ; it!=arr.end(); it++){
        cout<<*it<<" ";
    }
}