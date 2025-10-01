class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        int empty = numBottles;
        while(empty >= numExchange){
            int newB = empty / numExchange;
            total += newB;
            empty = empty % numExchange + newB;
        }
        return total;
    }
};