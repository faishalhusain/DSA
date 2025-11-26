class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }

    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> mpp;

        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = digitSum(i);
            mpp[sum]++;            
        }

        int maxFreq = 0;
        for (auto &it : mpp) {
            maxFreq = max(maxFreq, it.second);
        }

        return maxFreq;
    }
};
