/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
class Solution {
public:
    bool qCheck(queue<int> q, int v){
        while(!q.empty()){
            if(v==q.front()) return true;
            q.pop();
        }
        return false;
    }
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> studs;
        stack<int> sands;
        for(int i=sandwiches.size()-1;i>=0;i--) sands.push(sandwiches[i]);
        for(auto s:students) studs.push(s);
        //  int ans=studs.size();
        while(!sands.empty()&&qCheck(studs,sands.top())){
            if(studs.front()==sands.top()){
                studs.pop(), sands.pop();
                // ans--;
            } else {
                studs.push(studs.front());
                studs.pop();
            }
        }
        return studs.size();
    }
};
// @lc code=end

