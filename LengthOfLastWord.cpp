class Solution {
public:
    int lengthOfLastWord(string s) {
    int len = 0;
     
    /* String a is 'final'-- can not be modified
    So, create a copy and trim the spaces from
    both sides */
    string str(s);
    // boost::trim_right(str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == ' ')
            len = 0;
        else
            len++;
    }
    return len;
    }
};

//trim function didn't work
           



//First Remove all white space from end then start counting
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0,space = 0;
        for(int i =s.length()-1; i>=0;i--){
            if(s[i]==' ')
                space++;
            else
                break;
        }
        for(int i=s.length()-1-space; i>=0; i--){
            if(s[i] != ' ')
                count += 1;
            else
                return count;
        }
        return count;
    }
};
