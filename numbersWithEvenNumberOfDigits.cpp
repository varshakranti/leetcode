class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int counter = 0;
        int res = 0;
        for(int i=0; i<n; i++){
            // while(nums[i]/10 !=0){
            //     res ++;
            // }
            res=floor(log10(nums[i])) + 1;
            if(res % 2 == 0){
                counter++;
            }
        }
        return counter;
    }
};
