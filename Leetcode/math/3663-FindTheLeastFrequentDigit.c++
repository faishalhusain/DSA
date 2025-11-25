class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int> mpp;

        string str = to_string(n);

        for(char c : str) {
            int digit = c - '0';
            mpp[digit]++;
        }

        int minFreq = INT_MAX;
        int element = 10;  // larger than any digit

        for(auto &it : mpp){
            int digit = it.first;
            int freq = it.second;

            if(freq < minFreq || (freq == minFreq && digit < element)) {
                minFreq = freq;
                element = digit;
            }
        }

        return element;
    }
};
