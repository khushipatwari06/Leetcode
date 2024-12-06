/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* p=NULL;
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return true;
        if(p==NULL)
            p=head;
        bool ans=isPalindrome(head->next);
        if(ans==false)
            return ans;
        if(head->val==p->val)
        {
            p=p->next;
            return true;
        }
        return false;
    }
};
