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
class Solution
{
public:
    bool isPalindrome(ListNode* head)
    {
        vector<int>v1,v2;
        ListNode *cur_node=head;
        while(cur_node!=NULL)
        {
            v1.push_back(cur_node->val);
            cur_node=cur_node->next;
        }
        v2=v1;
        reverse(v2.begin(),v2.end());
        if(v1==v2)
            return true;
        else
            return false;
    }
};
