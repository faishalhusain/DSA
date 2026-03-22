class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0;i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int res = -1;
        int maxFreq = 0;
        for(auto it : mpp){
            if(it.first % 2 == 0){
                if(it.second > maxFreq || (it.second == maxFreq && it.first< res)){
                    maxFreq = it.second;
                    res = it.first;
                }
            }
        }
        return res;
    }
};