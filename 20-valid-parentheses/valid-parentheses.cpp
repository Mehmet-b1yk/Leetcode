class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) return false;
vector<char> opens = {};
for (int i = 0; i < s.length(); i++) 
{
    if (s[i] == '(' || s[i] == '[' || s[i] == '{') opens.push_back(s[i]);
    else 
    {
        if (opens.empty()) return false;
        if (s[i] == ')')
        {
            if (opens.back() == '(') opens.pop_back();
            else return false;
        }
        if (s[i] == ']')
        {
            if (opens.back() == '[') opens.pop_back();
            else return false;
        }
        if (s[i] == '}')
        {
            if (opens.back() == '{') opens.pop_back();
            else return false;
        }
    }
}
return opens.size() == 0;
    }
};