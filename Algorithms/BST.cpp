#include <iostream>
using namespace std;

struct node
{
    int value;
    node * right;
    node * left;
    node(int x){
        value = x;
        right = left = NULL;
    }
};


struct BST
{
    node * root;
    BST(){
        root = NULL;
    }
    void add(int x){
        node * n = new node(x);
        if(root == NULL){
            root = n;
        }
        else{
            node * cur = root;
            while (true)
            {
                if(cur->value>x){
                    if(cur->left!=NULL){
                        cur = cur -> left;
                    }
                    else{
                        cur->left = n;
                        return ;
                    }
                }
                else{
                    if(cur->right!=NULL){
                        cur = cur -> right;
                    }
                    else{
                        cur->right = n;
                        return ;
                    }
                }
            }
            
        }
    }

    void print(){
        node * cur = root;
        printing(cur);
    }
    void printing(node * cur){
        if(cur!=NULL){
            printing(cur->left);
            cout<<cur->value<<" ";
            printing(cur->right);
        }
    }
};



int main(){
    BST bst;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        bst.add(x);
    }
    bst.print();



    return 0;
}