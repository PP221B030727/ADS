// double ended que 
#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque <int> dq;
    dq.push_back(1);
    dq.pop_back();
    dq.push_front(2);
    dq.pop_front();
    dq.push_front(412);
    cout<<dq[0];
}
