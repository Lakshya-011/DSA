#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};
bool isSameTree(Node* p, Node* q) {
        if(p==NULL && q==NULL)
        return true;

        if(p==NULL && q!=NULL)
        return false;

        if(p!=NULL && q==NULL)
        return false;

        bool left=isSameTree(p->left,q->left);
        bool right=isSameTree(p->right,q->right);

        bool c= p->data==q->data;

        if(left && right && c){
            return true;
        }
        else{
            return false;
        }
    }
    Node* buildtree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* root=new Node(x);
    cout<<"Enter left child of "<<x<<": ";
    root->left=buildtree();
    cout<<"Enter right child of "<<x<<" : ";
    root->right=buildtree();
    return root;
}
int main(){
    Node* p=NULL;
    Node* q=NULL;
    vector<int> res;
    cout<<"Enter 1st tree: "<<endl;
    cout<<"Enter root: ";
    p=buildtree();
    cout<<"Enter 2nd tree: "<<endl;
    cout<<"Enter root: ";
    q=buildtree();
    if(isSameTree(p,q))
    cout<<"Both trees are same";
    else
    cout<<"Both trees are different";
}