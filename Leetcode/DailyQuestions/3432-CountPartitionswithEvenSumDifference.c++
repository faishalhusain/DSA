class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = 0;
        int pairs = 0;
        for(int i = 0;i<nums.size();i++) total += nums[i];
        int left = 0;
        int right = 0;
        for(int i = 0;i<nums.size()-1;i++){
            left += nums[i];
            right = total - left;
            if((left-right )% 2 == 0) pairs++;
        }
        return pairs;
    }
};