class Solution {
public:
     int findAddNext(int x, vector<int> v1){
        auto it=find(v1.begin(),v1.end(),x);
        int t=it-v1.begin(); 
        for(int i=t;i<v1.size();i++){
            if(v1[i]>x) 
                return v1[i];
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
        vector<int> v1;
        for(int i=0;i<nums1.size();i++)
            v1.push_back(findAddNext(nums1[i],nums2));
        return v;
    }
};
