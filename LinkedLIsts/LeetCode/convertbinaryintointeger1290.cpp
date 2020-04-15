/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        int count =0;
        
        ListNode* temp=head;
        
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        long long int sum=0;
        count--;
        
        while(head!=NULL){
            long long int x=pow(2, count);
            
            sum+=x*head->val;
            
            head=head->next;
            count--;
            
            
        }
        
        return sum;
        
    }
};
