class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int> temp(nums.size()*2);

        for(int i=0;i<nums.size();i++){
            temp[i]=temp[nums.size()+i]=nums[i];
        }

        vector<int> ans(nums.size());
        stack<int> st;

        for(int i=temp.size()-1;i>=nums.size();i--){

            while(!st.empty() && st.top()<=temp[i]){
                st.pop();
            }

            st.push(temp[i]);
        }

        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=temp[i]){
                st.pop();
            }

            if(st.empty()){
                ans[i]=-1;
            }else{
                ans[i]=st.top();
            }

            st.push(temp[i]);
        }

        return ans;
    }
};