class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            int a = 0;
            for(int j = i; j < n; j++) {
                a ^= arr[j];  // XOR from i to j

                int b = 0;
                for(int k = j + 1; k < n; k++) {
                    b ^= arr[k];  // XOR from j+1 to k

                    if(a == b) cnt++;
                }
            }
        }

        return cnt;
    }
};