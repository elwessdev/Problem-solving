/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // int highest=0;
        // vector<int> newGain(gain.size()+1);
        // newGain[0]=0;
        // newGain[1]=gain[0];
        // for(int i=1;i<gain.size();i++){
        //     newGain[i+1]=newGain[i]+gain[i];
        //     if(newGain[i+1]>highest) highest=newGain[i+1];
        // }
        // if(newGain[1]>highest) highest=newGain[1];
        // return highest;
        int highest=0;
        int sum=0;
        for(auto i:gain){
            sum+=i;
            if(sum>highest) highest=sum;
        }
        return highest;
    }
};
// @lc code=end

