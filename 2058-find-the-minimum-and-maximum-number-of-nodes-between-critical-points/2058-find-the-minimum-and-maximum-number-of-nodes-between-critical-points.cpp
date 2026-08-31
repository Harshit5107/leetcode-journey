
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int> kano={-1,-1};
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr){
            return kano;
        }

        vector<int> nums;
        ListNode* temp=head;

        while(temp!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next;
        }

        vector<int> critical;

        for(int i=1;i<nums.size()-1;i++){
            
            if(nums[i-1]<nums[i]&& nums[i]>nums[i+1]){
                critical.push_back(i);
            }else if(nums[i-1]>nums[i]&& nums[i]<nums[i+1]){
                critical.push_back(i);
            }
        }


        if(critical.size()<2){
            return kano;
        }

        vector<int> ans;

        int k=critical[0];
        int minimum=INT_MAX;

        for(int i=1;i<critical.size();i++){
            if(abs(k-critical[i])<minimum){
                minimum=abs(k-critical[i]);
            }
            k=critical[i];
        }
        ans.push_back(minimum);
        ans.push_back(abs(critical[0]-critical[critical.size()-1]));

        return ans;
        
        
    }
};