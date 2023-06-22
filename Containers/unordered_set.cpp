#include <iostream>
#include <unordered_set>
using namespace std;
struct hasher
{
    size_t operator()(const int &a ) const{
        return a % 2;
    }
};



int main(){
    unordered_set <int , hasher> u_s ; // Реализовае на подобие хэш таблицы  [0,255]
    u_s.insert(1);
    u_s.insert(2);
    u_s.insert(41);
    for(auto i : u_s){
        cout<<i<<" "; // справа четные слева нечетные 
    }
}