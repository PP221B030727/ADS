#include <iostream>
using namespace std;
// example 
int main(){
    int n, m, x;
    cin >> n >> m;
    for (int i=0; i<m; i++){
        cin >> x;
        int l=-1, r=n, count=0;
        while (l + 1 < r){
            int mid = (l + r) / 2;
            if (mid < x) {l = mid;}
            else {r=mid;}
            count++;
        }
        cout << count << "\n";
    }   
 return 0;
}