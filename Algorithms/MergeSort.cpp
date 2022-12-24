#include <iostream>
using namespace std;
void Merge(int * arr , int l1,int r1,int l2,int r2){
    int n1 = r1-l1+1;
    int l[n1];
    for(int i=0;i<n1;i++){
        l[i]=arr[l1+i];
        
    }
    int n2=r2-l2+1;
    int r[n2];
    for(int i=0;i<n2;i++){
        r[i]=arr[l2+i];
    }
    int i_arr=l1;
    int i_l=0;
    int i_r=0;



    while (i_l<n1 && i_r<n2)
    {
        if(r[i_r]>l[i_l]){
            arr[i_arr]=l[i_l];
            i_l++;
        }
        else{
            arr[i_arr]=r[i_r];
            i_r++;
        }
        i_arr++;
    }


    while (i_l<n1)
    {
        arr[i_arr] = l[i_l];
        i_arr++;
        i_l++;
    }


    while (i_r<n2)
    {
        arr[i_arr] = r[i_r];
        i_arr++;
        i_r++;
    }
    
    
}


void MergeSort(int * arr,int left,int righ){
    if(left<righ){
        int mid = (left + righ)/2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,righ);
        Merge(arr,left,mid,mid+1,righ);
    }
}



int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    MergeSort(arr,0,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}