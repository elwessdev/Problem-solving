/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool isEqual(stack<char> s1, stack<char> s2){   
        while(!s1.empty()){
            if(s1.top()!=s2.top()) return false;
            s1.pop(), s2.pop();
        }
        return true;
    }
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        for(auto c:s){
            if(c=='#'&&s1.empty()) continue;
            if(c=='#') s1.pop();
            else s1.push(c);
        }
        for(auto c:t){
            if(c=='#'&&s2.empty()) continue;
            if(c=='#') s2.pop();
            else s2.push(c);
        }
        if(s1.size()!=s2.size()) return false;
        return isEqual(s1,s2);
    }
};
// @lc code=end

