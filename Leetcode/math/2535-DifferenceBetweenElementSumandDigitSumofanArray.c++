class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;
        for (int i = 0;i<nums.size();i++){
            element_sum += nums[i];
            while (nums[i] > 0){
                int d = nums[i] % 10;
                digit_sum += d;
                nums[i] /= 10;
            }
        }
        return abs(element_sum - digit_sum);
    }
};