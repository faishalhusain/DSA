class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;
        for (char ch : word)
            if (isupper(static_cast<unsigned char>(ch))) cnt++;
        if (cnt == word.size()) return true;
        if (cnt == 0) return true;
        if (cnt == 1 && isupper(static_cast<unsigned char>(word[0])))
            return true;
        return false;
    }
};
