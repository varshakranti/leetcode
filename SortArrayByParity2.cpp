class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> even;
        vector<int> odd;
        
        for(int i =0; i<nums.size(); i++){
        if(((nums[i])%2)==0){
            even.push_back(nums[i]);
        }
        else{
            odd.push_back(nums[i]);
        }

        }
        int k=0;
        int i=0;
        while(k<(n)){
            nums[k] = even[i];
            k++;
            nums[k] = odd[i];
            k++;
            i++;
        }
        return nums;
    }
};


