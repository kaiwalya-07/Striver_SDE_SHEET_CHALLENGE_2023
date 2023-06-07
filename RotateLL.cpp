/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     int n=1;
     Node*temp=head;
     while(temp->next!=NULL){
          ++n;
          temp=temp->next;
     }

  
  temp->next=head;
  k=k%n;
   k=n-k;
  
  while(k--) temp=temp->next;

  head=temp->next;
  temp->next=NULL;
  
  return head;
     
}
