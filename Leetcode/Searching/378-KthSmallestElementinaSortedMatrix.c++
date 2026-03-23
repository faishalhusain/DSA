class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> res;
        for(int i = 0; i < matrix.size(); i++){
            res.insert(res.end(), matrix[i].begin(), matrix[i].end());
        }
        sort(res.begin(),res.end());
        return res[k-1];
    }
};

