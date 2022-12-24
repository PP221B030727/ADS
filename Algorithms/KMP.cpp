#include <iostream>
#include <vector>
using namespace std;
vector<int> prefix_function (string s) {
	int n = (int) s.length();
	vector<int> pi (n);
	for (int i=0; i<n; ++i){
        for (int k=0; k<=i; ++k){
            if (s.substr(0,k) == s.substr(i-k+1,k)){
                pi[i] = k;
            }
        }
    }			
	return pi;
}

int sib(string x){
    for(int i=x.size()-1;i>=1;i--){
        if(x.substr(0,i)==x.substr(x.size()-i,i)){
            return i;
        }
    }
    return 0;
}

vector <int> myPf(string x){
    int n = x.size();
    vector <int> ans(n);
    for(int i=1;i<=n;i++){
        ans[i-1] = sib(x.substr(0,i));
    }
    return ans;
}

int main(){
    // vector <int> p = prefix_function("HelloHelloWorld#Hello");
    vector <int> p =myPf("GOODGOODGOODLUCK");
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }


    // string x = "Hello";
    // for(int i=0;i<x.size();i++){
    //     cout<<x.substr(0,i)<<" "<<x.substr(x.size()-i,x.size())<<endl;
    // }
    return 0;
}