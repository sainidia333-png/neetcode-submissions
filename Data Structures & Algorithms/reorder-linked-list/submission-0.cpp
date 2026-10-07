class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            
        }
        ListNode* middle=slow;
             ListNode* move=middle->next;
             middle->next=NULL;
        ListNode* prev=NULL;
        ListNode* next;
        while(move!=NULL){
            next=move->next;
            move->next=prev;
            prev=move;
            move=next; 
        }
        ListNode*tail=head;
        while(tail!=NULL&&prev!=NULL){
            
           ListNode* next1 = tail->next;
           ListNode* next2 = prev->next;
           tail->next=prev;
           prev->next=next1;
           tail = next1;
          prev = next2;

        }
    }
};
