class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.contains(part)){
            int start=s.find(part);
            s.erase(start,part.length());
        }

        return s;
    }
};