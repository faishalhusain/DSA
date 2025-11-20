class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mpp;
        for (int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for (auto &it : mpp){
            if(it.second == 2) res.push_back(it.first);
        }
        return res;
    }
};