class Solution {
public:
    int lengthOfLastWord(string s) {
            int temp = 0;
    for(int i = s.length()-1; i > -1; i--)
    {
        if(s[i] == ' ' && temp == 0)
        {
            continue;
        }
        else if(s[i] == ' ')
        {
            return temp;
        }
        temp++;
    }
    return temp;
    }
};