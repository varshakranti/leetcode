class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int a[]=new int[2];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i!=j && nums[i]+nums[j]==target){
                    a[0]=i;
                    a[1]=j;
                }
            }
        }
        return a;
    }
}
