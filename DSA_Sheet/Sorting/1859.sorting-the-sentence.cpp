/*
 * @lc app=leetcode id=1859 lang=cpp
 *
 * [1859] Sorting the Sentence
 */

// @lc code=start
class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        string word="";
        for(char c:s){
            if(c==' ') words.push_back(word), word="";
            else word+=c;
        }
        words.push_back(word);

        int i=0;
        //=> use selection sort
        // while(i<words.size()){
        //     int posI=words[i].back()-'0';
        //     int k=i;
        //     for(int j=i+1;j<words.size();j++){
        //         int posJ=words[j].back()-'0';
        //         if(posI>posJ) posI=posJ, k=j;
        //     }
        //     swap(words[i],words[k]), i++;
        // }
        //=> Built in sort algorithm log(n log n)
        sort(words.begin(),words.end(),[](const string &a, const string &b){
            return a.back()<b.back();
        });
        string ans="";
        for (auto& word : words) word.pop_back(), ans+=word+' ';
        ans.pop_back();
        return ans;
    }
};
// @lc code=end

