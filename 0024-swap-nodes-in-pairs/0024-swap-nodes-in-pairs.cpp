
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr) return NULL;
        if(head->next==nullptr) return head;
        vector<ListNode*> nums;

        while(head!=nullptr){
            nums.push_back(head);
            head=head->next;
        }

        for(int i=0;i<nums.size()-1;i+=2){
            swap(nums[i],nums[i+1]);
        }

        for(int i=0;i<nums.size()-1;i++){
            nums[i]->next=nums[i+1];
        }

        nums[nums.size()-1]->next=nullptr;

        return nums[0];
    }
};