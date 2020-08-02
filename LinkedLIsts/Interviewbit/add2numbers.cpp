/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    
    
    ListNode* res = NULL; // res is head node of the resultant list  
    ListNode *temp, *prev = NULL;  
    int carry = 0;
  
  while(1){
      
      if(A==NULL && B==NULL ){
          break;
      }
      
      int sum=0;
      
      if(A!=NULL){
          sum+=A->val;
      }
      if(B!=NULL){
          sum+=B->val;
      }
      
      sum+=carry;
      
      if(sum>=10){
          carry=1;
      }
      else{
          carry=0;
      }
      
      sum=sum%10;
      
      temp=new ListNode(sum);
      
      if(res==NULL){
          res=temp;
      }
      else{
          prev->next=temp;
      }
      
      prev=temp;
      
      if(A){
          A=A->next;
      }
      if(B){
          B=B->next;
      }
  }
  if(carry==1){
      temp->next=new ListNode(carry);
  }
  
  return res;
    
    
    
    
}

