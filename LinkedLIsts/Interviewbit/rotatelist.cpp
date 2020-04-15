/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    
    ListNode * head=A;
    int size=0;
    
    while(head->next!=NULL){
        head=head->next;
        size++;
    }
    head->next=A;
    B=B%(size+1);
    
    int rem=size-B+1;
    
    ListNode *temp=A;
    
    while(rem>1){
        temp=temp->next;
        rem--;
    }
    ListNode * ans=temp->next;
    
    temp->next=NULL;
    
    
    
    return ans;
    
 
}

