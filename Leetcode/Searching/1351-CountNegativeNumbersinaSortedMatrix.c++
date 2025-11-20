class Solution {
public:
    int countNeg(vector<int> &arr){
        int temp = 0 ;
        for(int i = 0;i<arr.size();i++){
            if (arr[i] < 0) temp++; 
        }
        return temp;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(auto &row : grid){
            cnt += countNeg(row);
        }
        return cnt;
    }
};