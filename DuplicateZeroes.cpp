// myArray.insert(myArray.begin()+5, 100); // Inserts '100' between 5th and 6th elements and increases array size by 1.
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n = arr.size();
        for(int i=n-1; i>=0; i--){
            if(arr[i]==0){
                arr.insert(arr.begin() + i, 0);
                arr.pop_back();//to maintain the length of the array
            }
        }
    }
};
