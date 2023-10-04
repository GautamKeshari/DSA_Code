// https://www.codingninjas.com/codestudio/problems/circularly-linked_1070232?source=youtube&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan&leftPanelTab=2
#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/
// ###############################################
bool isCircular(Node* head){
    // Write your code here.

    if(head==NULL || head->next==NULL){
        return true;
    }

    Node *temp=head->next;
    
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }

    if(temp==head){
        return true;
    }
    if(temp==NULL){
        return false;
    }
}

// #############################################
// Read Lecture 47 from notebook