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
int maxDepth(Node* root) {
        if(root==NULL)
        return 0;

        int x=maxDepth(root->left);
        int y=maxDepth(root->right);

        return max(x,y)+1;
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
    cout<<"Height of Tree:" <<maxDepth(root); 
    
}

