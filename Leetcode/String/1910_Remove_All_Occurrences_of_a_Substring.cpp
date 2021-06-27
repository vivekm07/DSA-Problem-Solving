class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = part.length();
        size_t f = s.find(part);
        while(f!=string::npos){
            s.erase(f,n);
            f = s.find(part);
        }
        return s;
    }
};