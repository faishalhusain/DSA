class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; i++) {
            int num = i;
            bool isSelfDividing = true;
            while (num > 0) {
                int digit = num % 10;
                if (digit == 0 || i % digit != 0) {
                    isSelfDividing = false;
                    break;
                }
                num /= 10;
            }
            if (isSelfDividing) {
                res.push_back(i);
            }
        }
        return res;
    }
};
