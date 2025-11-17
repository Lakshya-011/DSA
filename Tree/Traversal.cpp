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
void preorder(Node* root){
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL)
    return;

    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
void postorder(Node* root){
    if(root==NULL)
    return;

    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
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
    cout<<"Preorder traversal: "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Preorder traversal: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal: "<<endl;
    postorder(root);
}

