#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};

Node* ReverseLinkedList(Node* head){

    if((head==NULL)||(head->next==NULL)){
        return head;
    }

    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    // head=prev;
    return head;
}

int main(){

}