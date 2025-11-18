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
int getlength(Node* head){
        int l=0;
        Node* temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        return l;
    }
Node* middleNode(Node* head) {
        int size=getlength(head);
        Node* temp=head;
        int c=0;
        while(c<size/2){
            temp=temp->next;
            c++;
        }
        return temp;
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
    cout<<"Linked List: ";
    print(head);
    Node* mid=middleNode(head);
    cout<<"Mid Node: "<<mid->data<<endl;
    
}