class Solution {
public:
    int countEven(int num) {
        int ans=0;

        for (int i = 1; i <= num; i++)
        {
            int count=0;
            int j=i;
            while (j>0)
            {   
                int t=j%10;
                count+=t;
                j/=10;

            }

            if (count%2==0 && count<=num)
            {
                ans++;
            }
            
            
        }
        return ans;
    }
};