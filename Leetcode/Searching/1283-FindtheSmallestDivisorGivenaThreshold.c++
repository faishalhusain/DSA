class Solution {
public:
    int sumofdiv(vector<int>& arr, int mid){
        int sum = 0;
        for (int i = 0;i<arr.size();i++){
            sum += ceil((double)arr[i] / mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(),nums.end());
        int ans = INT_MAX;
        while(low <= high){
            int mid = (low + high) / 2;
            if (sumofdiv(nums,mid) <= threshold){
                ans = mid;
                high = mid - 1;
            } else low = mid + 1;
        }
        return ans;
    }
};