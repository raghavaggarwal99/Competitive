/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    
    
    
    ListNode* head=NULL;
    
    if(A==NULL && B!=NULL){
        return B;
    }
     if(B==NULL && A!=NULL){
        return A;
    }
    
    
    if(A->val>B->val){
        head=B;
        B=B->next;
        head->next=NULL;
    }
    else{
        head=A;
        A=A->next;
        head->next=NULL;
    }
    
    ListNode* temp=head;
    temp->next=NULL;
    
    while(A!=NULL &&B!=NULL){
        
        if(A->val>=B->val){
            temp->next=B;
            B=B->next;
            temp=temp->next;
            temp->next=NULL;
        }
        else{
            temp->next=A;
            A=A->next;
            temp=temp->next;
            temp->next=NULL;
        }
        
        
    }
    
    return head;
  
    
    
}

