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

//2-- Optimal Approach using prefix XOR array (Time Complexity = O(n+q))

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prefix(n);
        prefix[0] = arr[0];
        for(int i = 1; i<n;i++){
            prefix[i] = prefix[i-1]^arr[i];
        }
        vector<int> res;
        for(auto &q : queries){
            int left = q[0];
            int right = q[1];
            if(left == 0) res.push_back(prefix[right]);
            else res.push_back(prefix[right] ^ prefix[left-1]);
        }
        return res;
    }
};