vector<int> icecreamParlor(int m, vector<int> arr) {
    int n = arr.size();
    for(size_t i = 0;i<n;i++){
        for(size_t j = i+1 ;j<n;j++){
            if((arr[i] + arr[j]) == m) {return {i+1,j+1};}
        }
    }
    return {-1,-1};
}