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
    ListNode *middleNode(ListNode *head)
    {
        /*int cnt = 0;
         ListNode *temp = head;
         while (temp != nullptr)
         {
             temp = temp->next;
             cnt++;
         }
         cnt = cnt / 2;
         int i = 0;
         ListNode *tem = head;
         while (i < cnt)
         {
             tem = tem->next;
             i++;
         }
         return tem; */
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != nullptr and fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};