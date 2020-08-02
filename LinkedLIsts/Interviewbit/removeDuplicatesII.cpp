/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
   // DO NOT write int main() function
        if ((A==NULL) || (A->next == NULL) ){return A;}
        ListNode* pre = new ListNode(0);
        pre->next = A;
        A =pre;
        ListNode* p = A;
                     
        while(p->next!=NULL){
            ListNode *p2 = p->next;
            while ((p2->next!=NULL)&&(p2->val==p2->next->val)){
                p2=p2->next;
            }
            if (p2!=p->next){
                p->next=p2->next;
            }else{
                p=p->next;
            }
        }  
        return A->next;
    }


