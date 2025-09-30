class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> newNums(n-1);
        if (n == 1) return nums[0];
        while (n > 1){
            for(int i = 0; i<n-1; i++){
                newNums[i] = ((nums[i] + nums[i+1]) % 10);
            }
            nums = newNums;
            n--;
        }
        return newNums[0];
    }
};