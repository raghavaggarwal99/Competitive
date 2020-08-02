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
    ListNode *getIntersectionNode(ListNode *n1, ListNode *n2) {
        
        unordered_map<ListNode*,int> hs;
        
        while (n1 != NULL) { 
            hs[n1]=1; 
            n1 = n1->next; 
        } 
        while (n2 != NULL) { 
            if (hs[n2]==1) { 
                return n2; 
            } 
            n2 = n2->next; 
        } 
        return NULL; 
        
        
    }
};
