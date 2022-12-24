// #include <iostream>
// using namespace std;
// int partition(int * arr,int s,int e){
//     int i = s-1;
//     int pivot = e;
//     for(int j=s;j<e;j++){
//         if(arr[j]<arr[pivot]){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[pivot]);
//     return i+1;
    
// }
// void Qsort(int * arr,int s , int e){
//     if(s<e){
//         int pivot = partition(arr,s,e);
//         Qsort(arr,s,pivot-1);
//         Qsort(arr,pivot+1,e);
//     }
// }



// int main(){
//     int arr[] = {4,2,1,5,7,3,6};  
//     int n = 7; 
//     Qsort(arr,0,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    




//     return 0;
// }



















#include <iostream>
using namespace std;
int partition(int * arr , int low , int high){
    int i = low-1;
    int pivot = high;
    for(int j=low;j<high;j++){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[pivot]);
    return i+1;
    
}
void Qsort(int * arr , int low , int high){
    if(low<high){
        int pivot = partition(arr,low,high);
        Qsort(arr,low,pivot-1);
        Qsort(arr,pivot+1,high);
    }
}


int main(){
    int arr[] = {4,2,1,5,7,3,6};  
    int n = 7; 
    Qsort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
    