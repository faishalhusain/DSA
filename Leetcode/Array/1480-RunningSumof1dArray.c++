class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int prefix = nums[0];
        for(int i = 1; i<nums.size();i++){
            prefix += nums[i];
            nums[i] = prefix;
        }
        return nums;
    }
};