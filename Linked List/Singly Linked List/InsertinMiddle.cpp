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
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertinMiddle(Node* &head,Node* &tail,int d, int pos){
    // Insert at head
    if(pos==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int c=1;
    while(c<pos-1){
        temp=temp->next;
        c++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
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
    Node* n1=new Node(20);
    // cout<<n1->data<<endl;
    // cout<<n1->next;

    Node* head=n1;
    Node* tail=n1;
    print(head);

    InsertAtTail(tail,30);
    InsertAtTail(tail,40);
    InsertAtTail(tail,60);
    InsertAtTail(tail,70);
    print(head);

    // int pos;
    // cout<<"Enter position to be inserted: ";
    // cin>>pos;
    cout<<"After inserting in middle: ";
    // InsertinMiddle(tail,head,50,3);
    // If position is head
    // InsertinMiddle(tail,head,50,1);

    // If position is end
    InsertinMiddle(head,tail,50,4);
    print(head);

    cout<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data;

}