class Solution {
public:
    string generateTheString(int n) {
        int count=0;
        string res;
        if(n%2==0){
            while(count<n-1){
                res=res+'a';
                count++;
            }
            res=res+'b';

            return res;
        }
        else{
            while(count<n){
                res=res+'a';
                count++;
            }
            return res;
        }
    }
};
