class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max=-1,temp;
        int n = arr.size();
        for(int i=n-1; i>=0; i--)
        {
            // temp = arr.at(i);
            // arr.at(i)= max;
            temp = arr[i];
            arr[i] = max;
            if(max<temp)
                max = temp;
        }
        return arr;
    }
};
