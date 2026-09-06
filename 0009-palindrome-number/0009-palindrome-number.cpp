class Solution {
public:
    bool isPalindrome(int x) {
       vector<int> vec;
       int numsss=x;
    while (x>0)
    {
        
        int num=x%10;
         x=x/10;

        vec.push_back(num);
        
    }
    
    long int t=0;
    for (int i : vec)
    {
        t=t*10+i;
    }

    
    if (t==numsss)
    {
        return  true;
    }
    else{
        return false;
    } 
    }
};