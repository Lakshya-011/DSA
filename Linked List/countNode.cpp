#include<bits/stdc++.h>
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
int count(Node* head){
    Node* temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}
void InsertAtEnd(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
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
    Node* n1= new Node(10);
    Node* tail=n1;
    Node* head=n1;
    InsertAtEnd(tail,20);
    InsertAtEnd(tail,30);
    InsertAtEnd(tail,40);
    InsertAtEnd(tail,50);
    InsertAtEnd(tail,60);
    InsertAtEnd(tail,70);
    print(head);
    cout<<count(head);
}