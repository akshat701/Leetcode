/* Que Link:
https://leetcode.com/problems/remove-duplicates-from-sorted-list/
*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
          
        ListNode* ptr=head;
        
        while(ptr and ptr->next!=nullptr)
        {
            if(ptr->val==ptr->next->val)
            {  
                ptr->next=ptr->next->next;
           
            }
            else
            ptr=ptr->next;
        }
        return head;
    }
};