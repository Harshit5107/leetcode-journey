class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        
        int n=arr.size();

        vector<int> left(n);
        vector<int> right(n);
        stack<int> st;

        //previour smaller element

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && arr[st.top()]>=arr[i])
            {
                st.pop();
            }

            left[i]=st.empty()?-1:st.top();
            st.push(i);
            
        }

        while (!st.empty())
        {
            st.pop();
        }
        
        //next greater elemnt

        for (int i = n-1; i>=0; i--)
        {
            while (!st.empty() && arr[st.top()]>arr[i])
            {
                st.pop();
            }
            
            right[i]=st.empty()?n:st.top();
            st.push(i);
        }
        

        long long sum=0;

        for (int i = 0; i < arr.size(); i++)
        {
            long long leftside=i-left[i];
            long long rightside=right[i]-i;
            sum+=arr[i]*leftside*rightside;
        }
        
        const int MOD=1e9+7;
        return sum%MOD;
    }
};