class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber>0){
            ans.push_back(((columnNumber-1) % 26) + 65);
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
