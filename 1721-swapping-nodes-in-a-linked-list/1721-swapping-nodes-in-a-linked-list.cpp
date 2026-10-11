
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<ListNode*> nums;
        ListNode* temp=head;

        while(temp!=nullptr){
            nums.push_back(temp);
            temp=temp->next;
        }

        swap(nums[k-1],nums[nums.size()-k]);

        for(int i=0;i<nums.size()-1;i++){
            nums[i]->next=nums[i+1];
        }

        nums[nums.size()-1]->next=nullptr;

        return nums[0];
    }
};