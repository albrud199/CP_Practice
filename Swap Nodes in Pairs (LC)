
struct ListNode* swapPairs(struct ListNode* head) {

    if (head == NULL || head -> next == NULL)
    return head;

    struct ListNode* CurrNode = head; 
    struct ListNode* NewHead = head->next;

    while(CurrNode != NULL && CurrNode->next != NULL )
    {
        struct ListNode* temp = CurrNode->next;

        CurrNode->next = CurrNode->next->next;
        temp->next = CurrNode;
        CurrNode = CurrNode->next;

        if (CurrNode != NULL && CurrNode->next != NULL)
        temp->next->next = CurrNode->next;
    }

    return NewHead;
}
