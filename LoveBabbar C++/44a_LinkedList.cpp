#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;      //put value of this->data in int data
            this->next=NULL;
        }
};

void insertAtHead(Node* &head,int d){
    Node *temp=new Node(d);
    // temp->data=15;  this is already made when we define Node(d)
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &head,int d){
    Node *tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node *temp=new Node(d);
    tail->next=temp;
}    

void insertAtPosition(int pos,Node* &head,int d){

    if(pos==0){
        insertAtHead(head,d);
        return;
    }
    Node *temp1=head;
    int x=0;
    while(x!=pos-1){
        temp1=temp1->next;
        x++;
    }
    Node* temp2=temp1->next; 
    Node* mid=new Node(d);
    temp1->next=mid;
    mid->next=temp2;
}

void deleteNode(int pos,Node* &head){
    if(pos==0){
        head=head->next;
        return;
    }
    Node *prev=head;
    int x=0;
    while(x!=pos-1){
        prev=prev->next;
        x++;
    }
    cout<<x<<endl;
    Node *curr=prev->next;
    prev->next=curr->next;

}

void print(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    
    //created a node
    printf("Head node created here: ");
    cout<<"\n";
    Node* node1=new Node(10);

    // point head to this created node
    Node* head = node1;
    print(head);

    printf("Element stored at head node here: ");
    cout<<"\n";
    insertAtHead(head,12);
    print(head);

    printf("Element stored at tail node here: ");
    cout<<"\n";
    insertAtTail(head,17);
    print(head);

    insertAtTail(head,21);
    print(head);

    cout<<"Enter element 15 at position 3: "<<endl;
    insertAtPosition(3,head,15);
    print(head);

    cout<<"Delete node at position 0: "<<endl;
    deleteNode(0,head);
    print(head);
}