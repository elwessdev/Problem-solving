/*
 * @lc app=leetcode id=599 lang=cpp
 *
 * [599] Minimum Index Sum of Two Lists
 */

// @lc code=start
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> hashTable;
        for(int i=0;i<list1.size();i++){
            hashTable[list1[i]]=i;
        }
        vector<string> common;
        int min_com=INT_MAX;
        for(int i=0;i<list2.size();i++){
            if(hashTable.count(list2[i])){
                if(hashTable[list2[i]]+i < min_com){
                    min_com=hashTable[list2[i]]+i;
                    common.clear();
                    common.push_back(list2[i]);
                } else if(hashTable[list2[i]]+i == min_com){
                    common.push_back(list2[i]);
                }
            }
        }
        return common;
    }
};
// @lc code=end

