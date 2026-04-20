class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxi = 0;
        for(int i = 0; i<colors.size(); i++){
            if(colors[0] != colors[i])
                maxi = max(maxi, i);
            if(colors[i] != colors[n-1])
                maxi = max(maxi, n-1-i);
        }
        return maxi;
    }
};