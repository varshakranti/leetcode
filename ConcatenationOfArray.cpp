class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(2*n);
        for(int i=0; i<n; i++) {
            ans[i] = nums[i];
            ans[n+i] = nums[i];
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//        vector<int>result(2 * nums.size()); 
//         for (int i =0; i<nums.size(); i++){
//             result[i] = result[i + nums.size()] = nums[i];
//         }
//         return result;
//     }
// };
