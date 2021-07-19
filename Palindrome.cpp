class Solution {
public:
    bool isPalindrome(int x) {
        int digit = 0;
        int rev = 0;
        int num = x;
        while(num>0){
            if (rev > INT_MAX/10 || rev < INT_MIN/10){
                 return 0;
             }
            digit = num%10;
            rev = rev*10 + digit;
            num = num/10;
        }
        if(x==rev){
            return true;
        }
        return false;
    }
};
