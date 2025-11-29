class Solution {
public:
    int sum(vector<int>& arr){
        int sum = 0;
        for(int i = 0;i<arr.size();i++) sum += arr[i];
        return sum;
    }
    
    int minOperations(vector<int>& nums, int k) {
        int cnt = sum(nums) % k;
        return cnt;
    }
};