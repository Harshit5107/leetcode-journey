class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int one=0;
        int two=0;
        int size=nums1.size()+nums2.size();
        int count=0;
        vector<int> temp;
        

        if(size%2==0){

            size/=2;
            size+=1;
            while(one!=nums1.size() && two!=nums2.size()){
                count++;
                if(nums1[one]>nums2[two]){
                    temp.push_back(nums2[two]);
                    two++;
                }else{
                    temp.push_back(nums1[one]);
                    one++;
                }

                if(count==size){
                    return (temp[temp.size()-1]+temp[temp.size()-2])/2.0;
                }
                
            }

            while(one!=nums1.size()){
                count++;
                temp.push_back(nums1[one]);
                one++;
                if(count==size){
                    return (temp[temp.size()-1]+temp[temp.size()-2])/2.0;
                }
            }

            while(two!=nums2.size()){
                count++;
                temp.push_back(nums2[two]);
                two++;
                if(count==size){
                    return (temp[temp.size()-1]+temp[temp.size()-2])/2.0;
                }
            }
        }else{
            size/=2;
            size+=1;

            while(one!=nums1.size() && two!=nums2.size()){
                count++;
                if(nums1[one]>nums2[two]){
                    temp.push_back(nums2[two]);
                    two++;
                }else{
                    temp.push_back(nums1[one]);
                    one++;
                }

                if(count==size){
                    return temp[temp.size()-1];
                }
            }

            while(one!=nums1.size()){
                count++;
                temp.push_back(nums1[one]);
                one++;
                if(count==size){
                    return temp[temp.size()-1];
                }

            }

            while(two!=nums2.size()){
                count++;
                temp.push_back(nums2[two]);
                two++;
                if(count==size){
                    return temp[temp.size()-1];
                }

            }
        }

        return 0;
    }
};