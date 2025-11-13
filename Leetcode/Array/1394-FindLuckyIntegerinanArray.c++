class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i = 0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        int max = 0;
        for(auto it : mpp){
            if(it.first == it.second){
                if(max < it.first) max = it.first;
            }
        }
        if(max == 0) return -1;
        return max;
    }
};