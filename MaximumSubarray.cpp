class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int ans=-9999999,cur=0;
        
    if(nums.size()==1) 
        return nums[0];
        
    for(int i=0;i<nums.size();i++){
        cur=cur+nums[i];
        ans=max(ans,cur);
        cur=max(0,cur);
        }
    return ans;
    }
};


