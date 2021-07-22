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


//by binary search
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
    }
};
