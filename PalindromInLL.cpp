#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* reverse(LinkedListNode<int>*cur){
     LinkedListNode<int>*prev=NULL;
     LinkedListNode<int>*temp=NULL;

     while(cur!=NULL){
         temp=cur->next;
         cur->next=prev;
         prev=cur;
         cur=temp;
     }
     
     return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    
    LinkedListNode<int>*s=head;
    LinkedListNode<int>*f=head;

    if(head==NULL || head->next==NULL){
        return true;
    }

    while(f->next!=NULL && f->next->next!=NULL){
        s=s->next;
        f=f->next->next;
    }
 
    s->next=reverse(s->next);
    s=s->next;
    LinkedListNode<int>*dummy=head;

    while(s!=NULL){
        if(dummy->data!=s->data){
            return false;
        }

        dummy=dummy->next;
        s=s->next;

    }

return true;
}
