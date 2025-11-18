#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertNode(Node* &tail,int element, int d){
    // Empty list
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        // Assuming element exists in list
        // Non-empty list
        Node* curr=tail;

        while(curr->data!=element){
            curr=curr->next;
        }
        // Element found ie curr is now at the node with data element
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}
void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
int main(){
    Node* tail=NULL;
    InsertNode(tail,10,10);
    InsertNode(tail,10,20);
    InsertNode(tail,20,30);
    InsertNode(tail,30,40);
    InsertNode(tail,40,60);
    InsertNode(tail,40,50);
    print(tail);
}