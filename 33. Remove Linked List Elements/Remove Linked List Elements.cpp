/* code link:
https://leetcode.com/problems/remove-linked-list-elements/
*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
         ListNode* res = head;
        while(head && head->val == val)
        {
            res = head->next;
            head = head->next;
        }
        if (!head)
        {
            return head;
        }
        ListNode* pre = head;
        head = head->next;
        while(head)
        {
            if (head->val == val)
            {
                pre->next = head->next;
            }
            else
            {
                pre = head;
            }
            head = head->next; 
        }
        return res;
    }
};