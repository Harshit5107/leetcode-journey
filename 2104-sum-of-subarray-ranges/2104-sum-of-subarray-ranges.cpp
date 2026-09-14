class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        
        vector<int> right_min(nums.size());
        vector<int> left_min(nums.size());
        vector<int> right_max(nums.size());
        vector<int> left_max(nums.size());
        int n=nums.size();
        stack<int> st;

        // left smaller
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && nums[st.top()]>=nums[i])
            {
                st.pop();
            }

            left_min[i]=st.empty()?-1:st.top();
            st.push(i);
            
        }

        while (!st.empty())
        {
            st.pop();
        }
        

        //right smaller

        for (int i = n-1; i >= 0; i--)
        {
            while (!st.empty() && nums[st.top()]>nums[i])
            {
                st.pop();
            }

            right_min[i]=st.empty()?n:st.top();
            st.push(i);
            
        }

        while (!st.empty())
        {
            st.pop();
        }

        //left bigger

        for (int i = 0; i<n; i++)
        {
            while (!st.empty() && nums[st.top()]<=nums[i])
            {
                st.pop();
            }

            left_max[i]=st.empty()?-1:st.top();
            st.push(i);
            
        }


        while (!st.empty())
        {
            st.pop();
        }

        //right bigger
        for (int i = n-1; i>=0; i--)
        {
            while (!st.empty() && nums[st.top()]<nums[i])
            {
                st.pop();
            }

            right_max[i]=st.empty()?n:st.top();
            st.push(i);
            
        }
        

        long long minimum_sum=0;
        long long maximum_sum=0;

        for(int i=0;i<nums.size();i++){

            long long small_right=right_min[i]-i;


            long long small_left=i-left_min[i];


            long long big_right=right_max[i]-i;


            long long big_left=i-left_max[i];


            minimum_sum+=(nums[i]*small_left*small_right);


            maximum_sum+=(nums[i]*big_left*big_right);
        }
        
        return maximum_sum-minimum_sum;
    }
};