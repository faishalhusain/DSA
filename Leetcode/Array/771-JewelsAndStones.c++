class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mpp;
        for(int i = 0;i<stones.size() ;i++){
            mpp[stones[i]]++;
        }
        int cnt = 0;
        for(int i = 0;i<jewels.size();i++){
            if(mpp.find(jewels[i]) != mpp.end()) cnt += mpp[jewels[i]]; 
        }
        return cnt;
    }
};