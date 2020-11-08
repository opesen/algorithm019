
struct ListNode {
    int val;
    ListNode *next;
};

ListNode* mergeTwoLists(ListNode *ptr1, ListNode *ptr2)
{
    if (!ptr1)
        return ptr2;
    if (!ptr2)
        return ptr1;

    if (ptr1->val < ptr2->val)
    {
        ptr1->next = mergeTwoLists(ptr1->next, ptr2);
        return ptr1;
    }
    else
        ptr2->next = mergeTwoLists(ptr1, ptr2->next);

    return ptr2;
}
