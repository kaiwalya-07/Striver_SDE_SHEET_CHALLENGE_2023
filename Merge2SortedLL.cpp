#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL) return second;
    if(second==NULL) return first;
    Node<int>*head= first->data>second->data ? second:first;
    Node<int>*dummy= new Node<int>(-1);

    Node<int> *prev=dummy,*left=first,*right=second;

    while(left!=NULL && right!=NULL){
        if(left->data<=right->data){
            prev->next=left;
            prev=left;
            left=left->next;
        }

        else{
            prev->next=right;
            prev=right;
            right=right->next;
        }
    }

    prev->next= right==NULL ? left :right;
    return head;

}
