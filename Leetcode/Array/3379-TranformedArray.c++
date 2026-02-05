class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        for(int i = 0;i < n;i++){
            if(nums[i] > 0){
                int temp = (i + nums[i]) % n;
                res[i] = nums[temp];
            } else if(nums[i] < 0){
                int temp = (i - abs(nums[i])) % n;
                if(temp < 0) temp += n;
                res[i] = nums[temp];
            } else res[i] = nums[i];
        }
        return res;
    }
};