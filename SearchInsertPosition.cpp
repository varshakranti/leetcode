class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target) 
                break;
            c++;
        }
        if(c==0) 
            return 0;
        if(nums[c-1] == target) 
            return c-1;
        return c;
    }
};
