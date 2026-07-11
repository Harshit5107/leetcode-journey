int part(vector<int>& arr,int low,int high){

    int pivot=arr[low];
    int i=low;
    int j=high;

    while (i<j)
    {
        while (arr[i]<=pivot && i<high)
        {
            i++;
        }

        while (arr[j]>pivot&& j>low)
        {
            j--;
        }
        
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
        
    }

    swap(arr[low],arr[j]);
    return j;
    
}

void mergesort(vector<int>& arr,int low,int high){
    
    if (low<high)
    {
        int kano=part(arr,low,high);
        mergesort(arr,low,kano-1);
        mergesort(arr,kano+1,high);

    }
    
    
    

    
}

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};
