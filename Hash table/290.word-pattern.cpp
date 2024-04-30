/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '||i==s.size()-1){
                if(i==s.size()-1) word+=s[i];
                words.push_back(word);
                word="";
            } else {
                word+=s[i];
            }
        }

        if(pattern.size()!=words.size()){
            return false;
        }
        unordered_map<char,string> charToword;
        unordered_map<string,char> wordToChar;
        for(int i=0;i<words.size();i++){
        char c=pattern[i];
        string w=words[i];
        if(
            (charToword.count(c)&&charToword[c]!=w)||
            (wordToChar.count(w)&&wordToChar[w]!=c)
            ){
            return false;
            }
            charToword[c]=w;
            wordToChar[w]=c;
        }
        return true;
    }
};
// @lc code=end

