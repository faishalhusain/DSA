class Solution {
public:
    int findGCD(vector<int>& nums) {
        int GCD = 0;
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        for(int i = 1; i <= mini; i++){
            if(mini % i == 0 && maxi % i == 0) GCD = max(GCD,i);
        }
        return GCD;
    }
};