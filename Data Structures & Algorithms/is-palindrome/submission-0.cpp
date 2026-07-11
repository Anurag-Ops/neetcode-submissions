class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> p;

        for (int i = 0; i < s.size(); i++) {
            if (!isalnum(s[i])) continue;   // non-alphanumeric ignore
            p.push_back(tolower(s[i]));
        }

        int i = 0;
        int j = p.size() - 1;

        while (i < j) {
            if (p[i] != p[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};