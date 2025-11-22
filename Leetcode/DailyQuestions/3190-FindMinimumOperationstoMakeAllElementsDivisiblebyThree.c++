class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] % 3 == 0) continue;
            if(nums[i] % 3 == 1) {nums[i] -= 1; cnt++;}
            if(nums[i] % 3 == 2) {nums[i] += 1; cnt++;}
        }
        return cnt;
    }
};