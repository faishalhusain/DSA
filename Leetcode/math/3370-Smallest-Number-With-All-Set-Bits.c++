class Solution {
public:
    bool isvalid(const vector<int>& arr){
        if(arr.empty()) return true;           
        for (size_t i = 0; i + 1 < arr.size(); ++i){
            if(arr[i] != arr[i+1]) return false;
        }
        return true;
    }

    int smallestNumber(int n) {
        long long num = n;         
        while(true){
            vector<int> bits;
            long long x = num;
            if (x == 0) bits.push_back(0);
            while(x > 0){
                bits.push_back(x % 2);
                x /= 2;
            }

            if(isvalid(bits)) return (int)num;
            ++num;
        }
        return -1;
    }
};
