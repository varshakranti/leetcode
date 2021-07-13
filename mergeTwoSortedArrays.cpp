class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums3[m+n];
        int i = 0, j = 0, k = 0;
 
    // Traverse both array
    while (i<m && j <n)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (nums1[i] < nums2[j]){
            nums3[k] = nums1[i];
            k++;
            i++;
        }
            
        else{
             nums3[k] = nums2[j];
             k++;
             j++;
        }
    }
 
    // Store remaining elements of first array
    while (i < m)
        nums3[k] = nums1[i];
        k++;
        i++;
 
    // Store remaining elements of second array
    while (j < n)
        nums3[k] = nums2[j];
        k++;
        j++;
    }
};
