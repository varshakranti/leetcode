class Solution {
public:
    
int lengthOfLastWord(string s) {

    int flag=0;
    int count2=0;
    
    if(s==" ")
        return 0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
              flag=0;                  // If it is a blank space , keep track of it by doing (flag ==0) 
        }
        else{                          // If the present character is not blank space , come to else part
            if(flag==0)                // If  the previous character was a blank space and new word starts , staart counting from 0 now
            {                          // we have checked it here so that if the string ends with space , iteration does not come here and the last words length is still stored in count
                count=0;
            }
                   
            count++;                      // count letters in the current word
            flag=1;                         // To keep track whether this character was Blank space or some other character 
        }
    }
    return count;  
}
   
};
