#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void InsertAtHead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void InsertAtTail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}
void InsertInMiddle(Node*&head,Node* &tail,int pos,int d){
    if(pos==1){
        InsertAtHead(head,tail,d);
        return;
    }
    Node* temp=new Node(d);
    Node* curr=head;
    Node* prev=NULL;
    int c=1;
    while(c<pos){
        prev=curr;
        curr=curr->next;
        c++;
    }
    if(curr==NULL){
        InsertAtTail(head,tail,d);
        return;
    }
    prev->next=temp;
    temp->next=curr;
    curr->prev=temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* n1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;

    InsertAtTail(head,tail,20);
    InsertAtTail(head,tail,30);
    InsertAtTail(head,tail,40);
    InsertAtTail(head,tail,50);
    cout<<"Before Inserting: "<<endl;
    print(head);

    InsertInMiddle(head,tail,5,25);
    cout<<"After Inserting: "<<endl;
    print(head);

    cout<<head->data<<endl;
    cout<<tail->data;
}