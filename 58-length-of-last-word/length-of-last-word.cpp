class Solution {
public:
    int lengthOfLastWord(string s) {
            int wordStart = 0;  
    for(int i = s.length()-1; i > -1; i--)
    {
        if(s[i] != ' ')
        {
            wordStart = i;
            break;
        }
    }
    int temp = 0;
    for(int i = wordStart; i > -1; i--)
    {
        if(s[i] == ' ')
        {
            return temp;
        }
        temp++;
    }
    return temp;
    }
};