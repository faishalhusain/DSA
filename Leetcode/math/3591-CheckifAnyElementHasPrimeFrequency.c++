class Solution {
    bool isPrime(int val){
        if (val < 2) return false;
        for(int i = 2;i*i <= val ;i++){
            if(val % i == 0) return false;
        }
        return true;
    }
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0;i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp) {
            if(isPrime(it.second)) return true;
        }
        return false;
    }
};