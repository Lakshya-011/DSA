#include<bits/stdc++.h> 
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        this->val=data;
        this->left=this->right=NULL;
    }
};

bool solve(Node* p, Node* q){
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL)
        return false;

        return ((p->val==q->val) && solve(p->left,q->right) && solve(p->right,q->left));
    }
    bool isSymmetric(Node* root) {
        if(root==NULL){
            return false;
        }
        if(root->left==NULL && root->right==NULL){
            return true;
        }

        return solve(root->left,root->right);

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
    Node* root=NULL;
    vector<int> res;
    cout<<"Enter root: ";
    root=buildtree();
    if(isSymmetric(root))
    cout<<"Tree is Symmetric!"<<endl;
    else
    cout<<"Tree is not Symmetric!"<<endl;
}