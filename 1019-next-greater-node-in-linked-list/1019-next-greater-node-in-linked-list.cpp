
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> nums;
        ListNode* temp=head;
        stack<int> st;

        while(temp!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next;
        }

        vector<int> ans(nums.size());
        int n=nums.size();

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }

            if(st.empty()){
                ans[i]=0;
            }else{
                ans[i]=st.top();
            }

            st.push(nums[i]);
        }

        return ans;
    }
};