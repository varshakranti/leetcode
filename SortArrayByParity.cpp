class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i=0; i<n; ++i){
            if(nums[i]%2==0)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        
        for(int i=0; i<n; ++i){
            if(nums[i]%2==1)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        
        return nums;
    }
};
