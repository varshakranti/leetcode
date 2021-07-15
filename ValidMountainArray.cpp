class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        
        if(n < 3) 
            return false;
        
        int i = 1;
        while(i < n && arr[i] > arr[i-1]){
            i++;
        }
        //i == 1 means arr[1] <= arr[0]
        //while loop terminate because the array has been scanned
        
        if(i == 1 || i == n) 
            return false;
        
        while(i < n && arr[i] < arr[i-1]){
            i++;
        }
        //while loop terminate because the array has been scanned
        
        if(i == n) 
            return true;
        //while loop terminate because arr[i] < arr[i-1] not holds
        return false;
    }
};
