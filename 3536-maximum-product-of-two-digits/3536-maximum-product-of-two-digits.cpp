class Solution {
public:
    int maxProduct(int n) {
        vector<int> num;
        while (n>0)
        {
            int t=n%10;
            n=n/10;
            num.push_back(t);
        }
        sort(num.begin(),num.end());
        return num[num.size()-1]*num[num.size()-2];
        
    }
};