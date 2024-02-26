/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *temp = new ListNode();
        temp->next = head;
        ListNode *node = temp;
        while (node->next != nullptr)
        {
            if (node->next->val != val)
            {
                node = node->next;
            }
            else
            {
                ListNode *tmp = node->next;
                node->next = node->next->next;
                delete (tmp);
            }
        }
        return temp->next;
    }
};