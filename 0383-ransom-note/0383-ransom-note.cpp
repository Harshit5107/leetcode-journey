class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int> ran;
        for (int i = 0; i < ransomNote.length(); i++)
        {
            if(ran.find(ransomNote[i])!=ran.end()){
                ran[ransomNote[i]]++;
            }else{
                ran[ransomNote[i]]=1;
            }
        }

        map<char,int> mag;
        for (int i = 0; i < magazine.length(); i++)
        {
            if(mag.find(magazine[i])!=mag.end()){
                mag[magazine[i]]++;
            }else{
                mag[magazine[i]]=1;
            }
        }

        bool ans=true;
        for (auto i : ran)
        {
            if (mag.find(i.first)!=mag.end())
            {
                if (mag[i.first]<i.second)
                {
                    ans=false;
                    break;
                }
                
            }else{
                ans=false;
                break;
            }
            
        }
        
        return ans;
    }
};