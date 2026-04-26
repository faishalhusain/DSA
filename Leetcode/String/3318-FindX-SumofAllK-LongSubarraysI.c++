class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> result;

        for (int i = 0; i <= n - k; i++) {
            unordered_map<int, int> freq;

            // Count frequencies in current window
            for (int j = i; j < i + k; j++) {
                freq[nums[j]]++;
            }

            // Store (value, freq)
            vector<pair<int, int>> v;
            for (auto &p : freq) {
                v.push_back({p.first, p.second});
            }

            // Sort by freq desc, value desc
            sort(v.begin(), v.end(), [](auto &a, auto &b) {
                if (a.second == b.second)
                    return a.first > b.first;
                return a.second > b.second;
            });

            // Take top x
            int sum = 0;
            for (int i = 0; i < min(x, (int)v.size()); i++) {
                sum += v[i].first * v[i].second;
            }

            result.push_back(sum);
        }

        return result;
    }
};