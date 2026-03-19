class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        sort(nums.begin(),nums.end());
        vector<double> averages;
        while(left < nums.size()/2){
            averages.push_back((nums[left] + nums[right]) / 2.0);
            left++;
            right--;
        }
        return *min_element(averages.begin(),averages.end());
    }
};