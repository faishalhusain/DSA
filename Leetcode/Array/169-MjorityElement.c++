class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
      int max = nums[0];
      for (int i = 0;i < n;i++){
        int count = 0;
        for(int j = i ;j<n;j++){
            if (nums[i] == nums[j])
                count++;
        }
        if (count > n/2)
        max = nums[i];
         
      }
      return max;
    }
};