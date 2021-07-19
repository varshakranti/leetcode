class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int j = 0;
        
        vector<int>arr(n,0);
        
        for(int i=0; i<n; i++){
            arr[i]=heights[i];
        }
        
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n; i++){
            if(heights[i]!=arr[i])
                j++;
        }
        
        return j;
    }
};
