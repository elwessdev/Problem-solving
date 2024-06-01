/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
public:
    int n=INT_MAX;
    stack<int> st;
    stack<int> st2;
    MinStack() {}
    
    void push(int val) {
        if(val<=n){
            n=val;
            st2.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(st.top()==n){
            st2.pop();
            
            if(!st2.empty()) n=st2.top();
            else n=INT_MAX;
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return n;
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
// @lc code=end

