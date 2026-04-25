class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int low = 0, cnt = 0, prod = 1;
        for(int high = 0; high < nums.size(); high++){
            prod = prod * nums[high];
            while(prod >= k) {
                prod /= nums[low];
                low++;
            }
            cnt += (high-low + 1);
        }
        return cnt;
    }
};