// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            minh.push({itr->second,itr->first});
            if(minh.size()>k){
                minh.pop();
            }
        }
        vector<int> v;
        while(!minh.empty()){
            
            v.push_back(minh.top().second);
            minh.pop();
        }
        //sort(v.begin(),v.end());
        return v;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
