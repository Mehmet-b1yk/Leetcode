class Solution {
public:
    bool isPalindrome(int x) {
        string word = to_string(x);
        string reverse;
        for (int i = word.size() - 1; i >= 0; i--){
            reverse += word[i];
        }
        return word == reverse;
    }
};