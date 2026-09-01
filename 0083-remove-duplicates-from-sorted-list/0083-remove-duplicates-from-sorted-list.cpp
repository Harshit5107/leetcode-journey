
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* ans=head;

        if (head==nullptr)
        {
            return head;
        }
        
        while (ans!=nullptr && ans->next!=nullptr)
        {
            if (ans->val==ans->next->val)
            {
                ListNode* temp=ans->next;
                ans->next=ans->next->next;
                delete temp;
            }else{
                ans=ans->next;
            }
            
        }
        
        return head;
    }
};