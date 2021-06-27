class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count = 0;
        int index = -1;
        int n = nums.size();
        
        for (int i = 1; i < n - 1; i++) {

            if (nums[i - 1] >= nums[i]) {
                count++;
                index = i-1;
                break;
            }
        }
        
        if (count == 0)
            return true;
        
        vector<int> nums1(nums);
        nums.erase(nums.begin()+index);
        int flag1=0,flag2=0;
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i - 1] >= nums[i]) {
                flag1= 1;
                break;
                
            }
        }
        
        nums1.erase(nums1.begin()+index+1);
        
        for (int i = 1; i < nums1.size(); i++) {

            if (nums1[i - 1] >= nums1[i]) {
                flag2=1;
                break;
                
            }
        }
        
        if(flag1&&flag2){
            return false;
        }
        return true;
    }
};