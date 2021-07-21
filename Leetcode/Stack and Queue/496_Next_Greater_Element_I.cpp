class Solution {
public:
     int findAddNext(int x, vector<int> v){
        auto it=find(v.begin(),v.end(),x);
        int t=it-v.begin(); 
        for(int i=t;i<v.size();i++){
            if(v[i]>x) 
                return v[i];
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
            v.push_back(findAddNext(nums1[i],nums2));
        return v;
    }
};
