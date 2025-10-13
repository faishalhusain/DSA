class Solution {
public:
    bool possible(vector<int>& arr, int days, int m , int k){
        int cnt = 0, bouquets = 0;
        for (int i = 0;i < arr.size();i++){
            if (arr[i] <= days) cnt++;
            else {
                bouquets += (cnt/k);
                cnt = 0;
            }
        }
        bouquets += (cnt/k);
        if (bouquets >=m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low =  *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end()); 
        if((long long)bloomDay.size() < (long long)m*k) return -1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = (low + high) / 2;
            if (possible(bloomDay,mid,m,k) == true){
                ans = mid;
                high = mid - 1;
            } else{
                low = mid + 1;
            }
        }
        return ans;
    }
};