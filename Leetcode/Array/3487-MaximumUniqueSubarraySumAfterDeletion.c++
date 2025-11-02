class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        if (maxi <= 0) {
            return maxi;
        }
        unordered_set<int> s;
        long long sum = 0;
        for (int x : nums) {
            if (x > 0 && s.insert(x).second) {
                sum += x;
            }
        }
        return (int)sum;
    }
};
