/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

int findIntersection(Node *h1, Node *h2)
{
    //Write your code here
    Node*ha=h1;
    Node*hb=h2;

    while(ha!=hb){
        
        ha=ha==NULL ? h2:ha->next;
        hb=hb==NULL ? h1:hb->next;
    }
    return ha;
}
