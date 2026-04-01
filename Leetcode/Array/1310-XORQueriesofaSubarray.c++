//1-- BruteforceApproach (Time Complexity == O(n*q))

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> res;
        for(int i = 0; i<queries.size();i++){
            int XOR = 0;
            for(int j = queries[i][0]; j<=queries[i][1];j++){
                XOR = XOR ^ arr[j];
            }
            res.push_back(XOR);
        }
        return res;
    }
};