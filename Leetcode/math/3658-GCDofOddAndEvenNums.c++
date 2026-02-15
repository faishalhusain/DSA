//1st approach takes O(n) time
class Solution {
    int gcd(int n1, int n2){
        int gcd = 0;
        for(int i = 1;i<=n1;i++){
            if(n1 % i == 0 && n2 % i == 0) gcd = i;
        }
        return gcd;
    }
public:
    int gcdOfOddEvenSums(int n) {
     int sumO = n*n;
     int sumE = (n*n) + n;  
     return gcd(sumO,sumE);
    }
};

// 2nd approach in constant time 

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        return n;
    }
};