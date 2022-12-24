#include <iostream>
using namespace std;
struct MaxHeap{
    int * arr;
    int length;
    int capasity;
    MaxHeap(int x){
        arr = new int[x];
        length = 0;
        capasity = x;
    }
    void add(int x){
        arr[length] = x;
        length++;
        heap_up(length-1);
    }
    void heap_up(int i){
        int p = (i-1)/2;
        if(arr[p]<arr[i]){
            swap(arr[p],arr[i]);
            heap_up(p);
        }
    }
    void heap_down(int i){
        int l = 2*i+1;
        int r = 2*i+2;
        int max_pos = i;
        if(l<length and arr[max_pos]<arr[l]){
            max_pos = l;
        }
        if(r<length and arr[max_pos]<arr[r]){
            max_pos = r;
        }
        if(i!=max_pos){
            swap(arr[i],arr[max_pos]);
            heap_down(max_pos);
        }
    }
    int cut_max(){
        int save = arr[0];
        arr[0]=arr[length-1];
        length--;
        heap_down(0);
        return save;
    }

};
int main(){
    int n;cin>>n;
    MaxHeap mh(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mh.add(x);
    }
    for(int i=0;i<n;i++){
        cout<<mh.cut_max()<<" ";
    }




    return 0;
}