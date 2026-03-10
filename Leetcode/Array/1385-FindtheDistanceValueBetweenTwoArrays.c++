class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int j = 0;
    int cnt = 0;
    for(int i = 0; i < arr1.size(); i++){
        while(j < arr2.size() && arr1[i] - arr2[j] > d){
            j++;
        }
        if(abs(arr1[i] - arr2[j]) > d){
            cnt++;
        }
    }
    return cnt;
}
};