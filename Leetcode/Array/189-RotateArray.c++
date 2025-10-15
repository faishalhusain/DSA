class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res;
        int n = nums.size();
        k = k % n; // to ensure that k should not be greater then array size
        for (int i = (n-k); i< n; i++){
            res.push_back(nums[i]);
        }
        for (int i = 0; i< (n-k); i++){
            res.push_back(nums[i]);
        }
        nums.assign(res.begin(),res.end());
    }
};