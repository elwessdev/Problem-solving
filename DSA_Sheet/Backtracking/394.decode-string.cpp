/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */

// @lc code=start
class Solution {
public:
    string decodeString(string s) {
        stack<string> s_str;
        stack<int> s_num;
        string curStr="";
        int curNum=0;
        for(char c:s){
            if(isdigit(c)){
                curNum=curNum*10+(c-'0');
            } else if(c=='['){
                s_str.push(curStr), s_num.push(curNum);
                curStr="", curNum=0;
            } else if(c==']'){
                string tempStr=curStr;
                int times=s_num.top();
                curStr=s_str.top();
                s_str.pop();
                s_num.pop();
                for(int i=0;i<times;i++){
                    curStr+=tempStr;
                }
            } else {
                curStr+=c;
            }
        }
        return curStr;
    }
};
// @lc code=end

