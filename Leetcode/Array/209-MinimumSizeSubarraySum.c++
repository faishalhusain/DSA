class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0, high = 0, sum = 0;
        int res = INT_MAX;
        while(high < nums.size()){
            sum += nums[high];
            while(sum >= target){
                int length = high - low + 1;
                res = min(res, length);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        if(res == INT_MAX) return 0;
        else return res;
    }
};