class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0 ;i<nums.size();i++){
            mpp[nums[i]]++;
        }     
        int sum = 0;
        for(auto &it : mpp){
            if(it.second == 1) sum += it.first;
        }
        return sum;
    }
};