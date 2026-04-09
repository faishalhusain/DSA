// using Recursion
class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        int ans1 = fib(n-1);
        int ans2 = fib(n-2);
        return ans1+ans2;
    }
};

// using Iterative Approach 
class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        int a = 0, b = 1;
        int sum = 0, i = 1;
        while(i < n){
            sum = a + b;
            a = b;
            b = sum;
            i++;
        }
        return sum;
    }
};