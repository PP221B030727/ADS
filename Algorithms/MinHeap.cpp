#include <iostream>
using namespace std;
struct MHeap
{
    int * a;
    int length;
    int capasity;
    MHeap(int capasity){
        length = 0;
        a = new int[capasity];
        capasity = capasity;
    }
    int cutMin(){
        int save = a[0];
        a[0] = a[length-1];
        length--;
        HeapDown(0);
        return save;
    }
    void HeapUp(int i){
        int pre = (i-1)/2;
        if(a[pre]>a[i]){
            swap(a[pre],a[i]);
            HeapUp(pre);
        }
    }
    void add(int x){
        a[length] = x;
        length+=1;
        HeapUp(length-1);
    }
    void HeapDown(int i){
        int l = 2*i+1;
        int r = 2*i+2;
        int min_pos = i;
        if(l<length and a[l]<a[min_pos]){
            min_pos = l;
        }
        if(r<length and a[r]<a[min_pos]){
            min_pos = r;
        }
        if(min_pos!=i){
            swap(a[min_pos],a[i]);
            HeapDown(min_pos);
        }
    }
    void print()
    {
        for(int i=0;i<length;i++){
            cout<<a[i]<<" ";
        }
    }
};







int main(){
    int n;cin>>n;
    MHeap mh(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mh.add(x);
    }
    // for(int i=0;i<n;i++){
    //     cout<<mh.cutMin()<<" ";
    // }
    mh.add(7);
    mh.print();



    return 0;

}