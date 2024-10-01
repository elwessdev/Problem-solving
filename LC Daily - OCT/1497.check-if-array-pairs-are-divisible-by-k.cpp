/*
 * @lc app=leetcode id=1497 lang=cpp
 *
 * [1497] Check If Array Pairs Are Divisible by k
 */

// @lc code=start
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> remainderMap;
        for (int &num : arr) {
            int rem = ((num % k) + k) % k;  // Ensures non-negative remainder
            remainderMap[rem]++;
        }
        for (auto &entry : remainderMap) {
            int rem = entry.first;
            int freq = entry.second;
            if (rem == 0) {
                if (freq % 2 != 0) return false;
            } else {
                int complement = k - rem;
                if (remainderMap[complement] != freq) return false;
            }
        }
        return true;
    }
};
// @lc code=end

