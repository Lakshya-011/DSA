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
Node* rotateRight(Node* head, int k) {
        if (!head || !head->next || k == 0) return head;
        Node* temp=head;
        int l=0;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        Node* ptr1=head;
        Node* ptr2=head;
        k=k%l;
        if(k==0){
            return head;
        }
        while(k>0){
            ptr2=ptr2->next;
            k--;
        }
        while(ptr2->next!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        ptr2->next=head;
        head=ptr1->next;
        ptr1->next=NULL;
        return head;
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
    cout<<"Before rotation: "; 
    print(head);
    Node* res=rotateRight(head,2);
    cout<<"After Rotation: ";
    print(res);
}
 