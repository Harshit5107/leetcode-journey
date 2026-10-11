
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> st(nums.begin(),nums.end());
        
        while(st.find(head->val)!=st.end()){
            head=head->next;
        }

        ListNode* temp=head;

        while(head!=nullptr && head->next!=nullptr){
            if(st.find(head->next->val)!=st.end()){
                ListNode* temp=head->next;
                head->next=head->next->next;
            }else{
                head=head->next;
            }
        }

        return temp;
    }
};