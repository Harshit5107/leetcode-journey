/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> nums;

        ListNode* temp=head;

        while(temp!=nullptr){
            nums.push_back(temp);
            temp=temp->next;
        }

        int n=nums.size()-1;

        for(int i=0;i<(nums.size()/2);i++){
            nums[i]->next=nums[n];
            nums[n]->next=nums[i+1];
            n--;
        }

        nums[nums.size()/2]->next=nullptr;
    }
};