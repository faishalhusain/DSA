class Solution {
public:
    int hammingWeight(int n) {
        vector<int> bin;
        unordered_map<int,int> mpp;
        while(n>0){
            bin.push_back(n%2);
            n /= 2;
        }
        for(int i = 0;i<bin.size();i++){
            mpp[bin[i]]++;
        }
        for(auto it : mpp){
            if (it.first == 1) return it.second;
        }
        return -1;
    }
};