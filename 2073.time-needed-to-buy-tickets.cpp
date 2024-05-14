/*
 * @lc app=leetcode id=2073 lang=cpp
 *
 * [2073] Time Needed to Buy Tickets
 */

// @lc code=start
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int i=0;i<tickets.size();i++) q.push(i);
        int ans=0;
        while(!q.empty()){
            if(tickets[q.front()]==0){
                q.pop();
                continue;
            }
            tickets[q.front()]--;
            ans++;
            if(tickets[k]==0) break;
            if(tickets[q.front()]!=0) q.push(q.front());
            q.pop();
        }
        return ans;
    }
};
// @lc code=end

