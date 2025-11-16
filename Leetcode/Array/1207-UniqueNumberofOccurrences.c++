class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int num : arr) mpp[num]++;

        unordered_set<int> s;
        for(auto &p : mpp){
            if(s.count(p.second)) return false;
            s.insert(p.second);
        }
        return true;
    }
};
