class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        

        for(int i=0;i<heights.size();i++){
            int maximum=INT_MIN;
            int index;

            for(int j=i;j<heights.size();j++){
                
                if(maximum<heights[j]){
                    index=j;
                    maximum=heights[j];
                }
            }

            swap(heights[i],heights[index]);
            swap(names[i],names[index]);
        }

        return names;
    }
};