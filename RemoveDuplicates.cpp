class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==0)
            return 0;
        
        int j = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if(nums.size()==0)
//             return 0;
//         int n = nums.size(), i = 1, j = 1;
//         while (j < n) {
//             if (nums[j-1] != nums[j]) {
//                 nums[i] = nums[j];
//                 i++;
//             }
//             j++;
//         }
//         return i;
//     }
// };
