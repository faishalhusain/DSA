class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        long long sum = 0;
        int num = x;
        while(num > 0){
            int d = num % 10;
            sum += d;
            num /= 10;
        }
        if(x % sum == 0) return sum;
        else return -1;
    }
};