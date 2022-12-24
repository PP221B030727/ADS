#include <iostream>
using namespace std;
struct node
{
    int value;
    node * next;
    node * prev;
    node(int x){
        value = x;
        next = prev = NULL;
    }
};

struct LinkedList
{
    node * head;
    node * tail;
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void add(int x){
        node * n = new node(x);
        if(head==NULL){
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail->next->prev = tail;
            tail = tail->next;
        }
    }
    void print(bool f){
        if(f){
            node * cur = head;
            while (cur!=NULL)
            {
                cout<<cur->value<<" ";
                cur=cur->next;
            }
        }
        else{
            node * cur = tail;
            while (cur!=NULL)
            {
                cout<<cur->value<<" ";
                cur = cur->prev;
            }
        }
    }

};




int main(){
    int n;cin>>n;
    LinkedList ll;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ll.add(x);
    }
    ll.print(false);
}