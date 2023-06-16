#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    unordered_map<LinkedListNode<int>*,LinkedListNode<int>*> m;
    LinkedListNode<int>*cur=head;

    while(cur!=NULL){
         LinkedListNode<int>*newN=new LinkedListNode<int>(cur->data);
         m[cur]=newN;
         cur=cur->next;
    }

    LinkedListNode<int>*t=head;

    while(t!=NULL){
        LinkedListNode<int>*node=m[t];
        node->next= t->next!=NULL? m[t->next]:NULL;
        node->random= t->random!=NULL? m[t->random]:NULL;
        t=t->next;
    }

    return m[head];
}
