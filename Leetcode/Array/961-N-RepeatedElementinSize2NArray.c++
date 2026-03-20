// 1-- using hashmap 
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0; i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > 1) return it.first;
        }
        return -1;
    }
};

// 2-- Optimal solution 

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return nums[i];
        }
        return -1;
    }
};