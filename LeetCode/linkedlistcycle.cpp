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
    bool hasCycle(ListNode *head) {
        
         unordered_map<ListNode* ,int> a ;
        
        while (head != NULL) {
            if (a[head]==1) {
                return true;
            }
            else {
                a[head]=1;
            }
            head = head->next;
        }
        return false;
        
        
        
    }
};
