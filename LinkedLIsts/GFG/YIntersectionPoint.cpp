/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
    if(head1==NULL || head2==NULL){
        return 0;
    }
    
    
    while(head1!=NULL){
        Node* temp=head2;
        
        while(temp!=NULL){
            if(head1==temp){
                return head1->data;
            }
            temp=temp->next;
        }
        
        head1=head1->next;
    }
    
    
    
}
