class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() > 2) {
            string new_s = "";
            for (int i = 0; i < s.size() - 1; i++) {
                int temp = ((s[i] - '0') + (s[i + 1] - '0')) % 10;
                new_s += to_string(temp);
            }
            s = new_s;  // replace old string with the new one
        }
        return s[0] == s[1];
    }
};
