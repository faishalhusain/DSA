void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    long long mini = 0, maxi = 0;
    for(int i = 0;i<arr.size()-1;i++) mini += arr[i];
    for(int i = 1;i<arr.size();i++) maxi += arr[i];
    cout<<mini<<" "<<maxi;
}