class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int maxi = 0;
        sort(nums.begin(),nums.end());
        int l = 0, r = nums.size()-1;
        while(l < r){
            int sum = nums[l]+nums[r];
            maxi = max(maxi,sum);
            l++;
            r--;
        }
        return maxi;
    }
};