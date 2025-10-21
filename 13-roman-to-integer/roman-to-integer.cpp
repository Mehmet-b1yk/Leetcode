class Solution {
public:
    int FindIndex(vector<char> chars, char c)
    {
        for (int i = 0; i < chars.size();i++)
    {
            if (chars[i] == c) return i;
    }
    return 0;
    }
    int romanToInt(string s) {
            vector<int> nums = {1,5,10,50,100,500,1000};
    vector<char> chars = { 'I','V','X','L','C','D','M'};
    int toplam = 0;
    for (int i = 0; i < s.length(); i++) {
        int c = FindIndex(chars, s[i]);
        int cnext = FindIndex(chars, s[i + 1]);
        if (c < 6 && c % 2 == 0) {
            if (i + 1 == s.length())
                toplam += nums[c];
            
            else {
                if (cnext > c && (nums[cnext] / nums[c] == 5 || nums[cnext] / nums[c] == 10))
                    toplam -= nums[c];
                else
                    toplam += nums[c];
            }
        }
        else {
            toplam += nums[c];
        }
        } 
    return toplam;
    }

};