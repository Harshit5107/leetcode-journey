class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum=0;
        int squaresum=0;

        while(n>0){
            int t=n%10;
            n/=10;
            digitSum+=t;
            squaresum+=(t*t);
        }

        if((squaresum-digitSum)>=50) return true;
        return false;
    }
};