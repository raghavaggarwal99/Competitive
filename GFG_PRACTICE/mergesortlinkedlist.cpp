/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/
/* Function to mergesort the linked list
   It should return head of the modified list  */
Node* x(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node *nh=NULL,*nt=NULL;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data<head2->data)
        {
            if(nh==NULL)
            {
                nh=head1;
                nt=head1;
            }
            else
            {
                nt->next=head1;
                nt=nt->next;
            }
            head1=head1->next;
        }
        else
        {
            if(nh==NULL)
            {
                nh=head2;
                nt=head2;
            }
            else
            {
                nt->next=head2;
                nt=nt->next;
            }
            head2=head2->next;
        }
    }
    if(head1==NULL)
        nt->next=head2;
    else
        nt->next=head1;
    return nh;
        
}
Node* merge(Node* head,Node* tail)
{
   if(head==NULL || head->next==NULL)
{return head;}
Node* slow=head;
  Node* fast=head->next;
  while(fast!=NULL && fast->next!=NULL)
  {
    slow=slow->next;
    fast=fast->next->next;
  }
    Node* temp=slow->next;
    slow->next=NULL;
    Node* head1=merge(head,slow);
    Node* head2=merge(temp,tail);
    return x(head1,head2);
}
Node* mergeSort(Node* head) {
    // your code here
    Node *tail=NULL;
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    tail=temp;
    return merge(head,tail);
}

