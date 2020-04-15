/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    //Your code here
    
    if(head==NULL){
        return 0;
    }
    
    stack<int> s;
    
    Node *temp=head;
    
    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }
    
    while(!s.empty()){
        if(s.top()!=head->data){
            return 0;
        }
        
        s.pop();
        head=head->next;
    }
    
    return 1;
    
    
    
}


