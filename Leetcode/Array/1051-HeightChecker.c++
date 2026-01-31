class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> init;
        init = heights;
        sort(heights.begin(),heights.end());
        int cnt = 0;
        for(int i = 0;i<heights.size();i++){
            if(heights[i] != init[i]) cnt++;
        }
        return cnt;
    }
};