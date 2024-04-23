/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        map<string,int> hashTable {
            {"I", 1},
            {"V", 5},
            {"X", 10},
            {"L", 50},
            {"C", 100},
            {"D", 500},
            {"M", 1000},
            {"IV", 4},
            {"IX", 9},
            {"XL", 40},
            {"XC", 90},
            {"CD", 400},
            {"CM", 900}
            };

        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                if(s[i+1]=='V'||s[i+1]=='X'){
                    string a="";
                    a+=s[i];
                    a+=s[i+1];
                    sum+=hashTable[a];
                    i++;
                    continue;
                }
            }
            if(s[i]=='X'){
                if(s[i+1]=='L'||s[i+1]=='C'){
                    string a="";
                    a+=s[i];
                    a+=s[i+1];
                    sum+=hashTable[a];
                    i++;
                    continue;
                }
            }
            if(s[i]=='C'){
                if(s[i+1]=='D'||s[i+1]=='M'){
                    string a="";
                    a+=s[i];
                    a+=s[i+1];
                    sum+=hashTable[a];
                    i++;
                    continue;
                }
            }
            string a="";
            a+=s[i];
            sum+=hashTable[a];
        }

        return sum;
    }
};
// @lc code=end

