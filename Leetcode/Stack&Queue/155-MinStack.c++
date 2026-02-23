class MinStack {
public:
    stack<long long> st;
    long long mini = LLONG_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini = val;
        }
        else{
            if(val > mini) st.push(val);
            else{
                st.push(2LL *val - mini);
                mini = val;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long x = st.top();
        st.pop();
        if(x < mini) mini = 2*mini - x;
    }
    
    int top() {
        if(st.empty()) return -1;
        long long x = st.top();
        if(x > mini) return x;
        else return mini;
    }
    
    int getMin() {
        if(st.empty()) return -1;
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */