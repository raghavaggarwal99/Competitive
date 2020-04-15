/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// root: head node
Node *removeDuplicates(Node *root)
{
 // your code goes here
 
 Node* temp=root;
 
 Node *temp2;
 
 
     
     if(temp==NULL){
         return root;
     }
     
    while(temp->next!=NULL){
             
        if(temp->data==temp->next->data){
                temp2=temp->next->next;
                free(temp->next);
                temp->next=temp2;
                
        }
        else{
            temp=temp->next;
        }
     }
    //  temp=temp->next;
     
 
 return root;
 
 
 
}
