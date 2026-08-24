class Solution {
public:
    int mirrorDistance(int n) {
        
        int newoone=0;
        int oldone=n;
        while (n>0)
        {
            int k=n%10;
            n/=10;
            newoone=newoone*10+k;
        }
        
        return abs(oldone-newoone);
    }
};