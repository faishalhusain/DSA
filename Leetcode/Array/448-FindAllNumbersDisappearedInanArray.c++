class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        unordered_map<int,int> mpp;
        vector<int> res;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i = 1;i <=nums.size();i++){
            if(mpp[i] == 0) res.push_back(i);
        }
        return res;
    }
};