// I have uploaded two approaches--
// 1st one is using a counter variable 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt = 0;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        if(cnt == n) {
            ListNode* newhead = head->next;
            delete(head);
            return newhead;
        }
        int cnt1 = cnt - n;
        temp = head;
        while(temp){
            cnt1--;
            if(cnt1 == 0) break;
            temp = temp->next;
        }
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete(del);
        return head;
    }
};


// 2nd is using fast and slow pointer 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        for(int i = 0; i< n;i++) fast = fast->next;
        if(fast == NULL) return head->next;
        ListNode* slow = head;
        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* del = slow -> next;
        slow->next = slow->next->next;
        delete(del);
        return head;
    }
};