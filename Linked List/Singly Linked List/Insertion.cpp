#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
// Insertion at head in SLL
// void InsertAtHead(Node* & head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }
// Insertion at end in SLL
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;;
}
// Print LL
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* n1=new Node(20);
    // cout<<n1->data<<endl;
    // cout<<n1->next;

    // Node* head=n1;
    // print(head);

    // InsertAtHead(head,12);
    // print(head);

    // InsertAtHead(head,17);
    // print(head);

    Node* head=n1;
    Node* tail=n1;
    print(head);

    InsertAtTail(tail,25);
    print(head);

    InsertAtTail(tail,35);
    print(head);    

}