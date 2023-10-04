// https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?leftPanelTab=1&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan

/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

// #############################################

// Node * uniqueSortedList(Node * head) {
//     // Write your code here.
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     Node* prev=head;
//     Node* curr=head->next;

//     while(curr!=NULL){
//         if(curr->data==prev->data){
//             Node *nodeToDelete=curr;
//             curr=curr->next;
//             prev->next=curr;
//             delete(nodeToDelete);  //THIS IS IMPORTANT
//         }else{
//             prev=curr;
//             curr=curr->next;
//         }
//     }
//     return head;

// }

// ##########################################