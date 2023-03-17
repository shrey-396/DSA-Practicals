class Solution {
public:
    ListNode* sortList(ListNode* head) {
         if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode *slow = head, *fast = head, *pre = head;
        while(fast != nullptr && fast->next != nullptr){
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        pre->next = nullptr;

        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);

        ListNode* newHead = this->merge(left, right);
        return newHead;
    }
private:
    ListNode* merge(ListNode* left, ListNode* right){
        ListNode newHead(-1);
        ListNode* p = &newHead;
        while(left != nullptr && right != nullptr){
            if(left -> val < right->val){
                p->next = left;
                left = left->next;
            }else{
                p->next = right;
                right = right->next;
            }
            p = p->next;
        }
        if(left != nullptr){
            p->next = left;
        }else if(right != nullptr){
            p->next = right;
        }
        return newHead.next;
    }
};