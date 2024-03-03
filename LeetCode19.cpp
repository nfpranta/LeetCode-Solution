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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *fir = dummy;
        ListNode *sec = dummy;

        for (int i = 0; i <= n; i++)
        {
            fir = fir->next; // creating a n+1 difference
        }
        while (fir != nullptr)
        {
            fir = fir->next;
            sec = sec->next;
        }
        ListNode *temp = sec->next;
        sec->next = sec->next->next;
        delete temp;
        return dummy->next;
    }
};