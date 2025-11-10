class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int n = num;
        if(num < 10) return 1;
        while(n > 0){
            int d = n % 10;
            if((d == 1) || (num % d == 0)) cnt++;
            n /= 10;
        }
        return cnt;
    }
};