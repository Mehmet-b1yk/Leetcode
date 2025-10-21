class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string common = "";
    string smallest = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        if (smallest.length() > strs[i].length())
            smallest = strs[i];
    }
    for (int x = 0; x < smallest.size(); x++) {
        for (int y = 0; y < strs.size();y++) {
            if (smallest.at(x) != strs[y].at(x)) 
            {
            return common;
            }
        }
    common += strs[0].at(x);
    }
    return common;
    }
};