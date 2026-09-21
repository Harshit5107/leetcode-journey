class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int count=0;
        if(n==0) return true;

        if(flowerbed.size()==1 && flowerbed[0]==0 && n==1) return true;
        else if(flowerbed.size()==1) return false;
        
        for(int i=0;i<flowerbed.size();i++){

            if(i==0 && flowerbed[1]==0 && flowerbed[0]==0){
                count++;
                flowerbed[0]=1;
            }else if(i==flowerbed.size()-1 && flowerbed[flowerbed.size()-1]==0&& flowerbed[flowerbed.size()-2]==0){
                count++;
                flowerbed[flowerbed.size()-1]=1;
            }else if(i>0){
                if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                    count++;
                    flowerbed[i]=1;
                }
            }

            if(count>=n){
                return true;
            }
        }

        return false;
    }
};