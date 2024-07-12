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
//https://www.youtube.com/watch?v=S5bfdUTrKLM&list=PLot-Xpze53leU0Ec0VkBhnf4npMRFiNcB
class Solution
{
    public:
        ListNode* middleNode(ListNode *head)
        {
            ListNode *fast = head->next;
            ListNode *slow = head;
            while (fast != nullptr and fast->next != nullptr)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
    ListNode* reverseList(ListNode *head)
    {
        ListNode *nextNode, *prev = NULL;
        while (head != NULL)
        {
            nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }
    void reorderList(ListNode *head)
    {
        ListNode *midNode = middleNode(head);
        ListNode *secondPart = midNode->next;
        midNode->next = nullptr;	//setting last element of first part to null which stored the address of head
        ListNode *reverseSecondPart = reverseList(secondPart);
        ListNode *firstPart = head;
        secondPart = reverseSecondPart;
        while (secondPart)	//since second could be smsller than firstpart
        {
            ListNode *tmp1 = firstPart->next;
            ListNode *tmp2 = secondPart->next;
            firstPart->next = secondPart;
            secondPart->next = tmp1;
            firstPart = tmp1;
            secondPart = tmp2;
        }
    }
};
