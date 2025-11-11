class Solution {
public:
    int digitsum(int n){
        long long sum = 0;
        while(n > 0){
            int d = n % 10;
            sum = sum + d;
            n /= 10;
        }
        return sum;
    }
    int addDigits(int num) {
        int res = num;
        if(num < 10) return num;
        while (res >= 10){
            res = digitsum(res);
        }
        return res;
    }
};