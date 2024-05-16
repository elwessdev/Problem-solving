/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start
class MyQueue {
public:
    stack<int> q;

    MyQueue() {
        
    }
    
    void push(int x) {
        int i=0;
        vector<int> vQ;
        while(!q.empty()){
            vQ.push_back(q.top());
            q.pop();
        }
        vQ.push_back(x);
        while(!vQ.empty()){
            q.push(vQ.back());
            vQ.pop_back();
        }
    }

    int pop() {
        int ls=q.top();
        q.pop();
        return ls;
    }

    int peek() {
        return q.top();
    }

    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

