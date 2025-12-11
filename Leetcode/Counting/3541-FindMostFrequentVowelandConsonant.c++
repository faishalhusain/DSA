class Solution {
public:
    int maxFreqSum(string s) {
        int Vfreq = 0, Cfreq = 0;
        unordered_map<char,int> mpp;
        for(char i = 0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(auto &it : mpp){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' ||it.first == 'u'){
                if(it.second > Vfreq) Vfreq = it.second;
            }else{
                if(it.second > Cfreq) Cfreq = it.second;
            }
        }
        return (Vfreq + Cfreq);
    }
};