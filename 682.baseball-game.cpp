/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans=0;
        for(auto op:operations){
            if(op=="+"){
                int nm1=st.top();
                st.pop();
                int ns=nm1+st.top();
                st.push(nm1);
                st.push(ns);
            } else if(op=="D"){
                st.push(st.top()*2);
            } else if(op=="C"){
                st.pop();
            } else {
                st.push(stoi(op));
            }
        }
        while(!st.empty()) ans+=st.top(), st.pop();
        return ans;
    }
};
// @lc code=end

