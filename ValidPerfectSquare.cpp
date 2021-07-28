class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int i = 1, j = num, m;
        
        while(i<=j){
        m = (i + j)/2;
        if( m * m == num)
            return true;
        else if (m * m < num){
            i = m + 1;
        }
        else 
            j = m -1;
        }
        return false;
    }
};
