class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt += 1;
                if (cnt > max)
                    max = cnt;
            } else
                cnt = 0;
        }
        return max;
    }
};