
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> st(nums.begin(),nums.end());
        
        while(st.count(head->val)>0){
            head=head->next;
        }

        ListNode* temp=head;

        while(head!=nullptr && head->next!=nullptr){
            if(st.count(head->next->val)>0){
                ListNode* temp=head->next;
                head->next=head->next->next;
            }else{
                head=head->next;
            }
        }

        return temp;
    }
};