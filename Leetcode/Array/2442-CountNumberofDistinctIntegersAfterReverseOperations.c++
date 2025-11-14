class Solution {
public:
    int reverse(int n){
        int rev = 0;
        while(n > 0){
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i < n;i++){
            nums.push_back(reverse(nums[i]));
        }
        set<int> st;
        for(auto &it : nums){
            st.insert(it);
        }
        return st.size();
    }
};