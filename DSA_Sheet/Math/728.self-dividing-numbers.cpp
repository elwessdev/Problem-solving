/*
 * @lc app=leetcode id=728 lang=cpp
 *
 * [728] Self Dividing Numbers
 */

// @lc code=start
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(i>9&&i%10==0) continue;
            if(i>9){
                int num=i;
                while(num>0){
                    int sub=num%10;
                    if(sub==0||i%sub!=0) break;
                    num/=10;
                }
                if(num==0) ans.push_back(i);
            } else {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
// @lc code=end

