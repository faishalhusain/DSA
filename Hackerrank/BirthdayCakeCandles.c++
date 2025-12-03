//using hash-map

int birthdayCakeCandles(vector<int> candles) {
    unordered_map<int,int> mpp;
    for(size_t i = 0;i<candles.size();i++){
        mpp[candles[i]]++;
    }
     int res = 0;
     int max =0 ;
    for(auto &it : mpp){
        if(it.first > max) {
            max = it.first;
            res = it.second;
        }
    }
    return res;
}