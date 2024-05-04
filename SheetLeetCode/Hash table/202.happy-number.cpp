/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        set<int> hashSet;
        while(true){
            int sum=0;
            while(n!=0){
                sum+=pow(n%10,2);
                n=n/10;
            }
            if(sum==1) return true;
            n=sum;
            if(hashSet.count(n)) return false;
            hashSet.insert(n);
        }
        return false;
    }
};
// @lc code=end

