/*
 * @lc app=leetcode id=1360 lang=cpp
 *
 * [1360] Number of Days Between Two Dates
 */

// @lc code=start
class Solution {
public:
    int strToInt(string str){
        int sz=str.size();
        int ans=0;
        for(auto s:str){
            int a = s-'0';
            ans=ans*10+a;
        }
        return ans;
    }
    int f(string date){
        // Convert String date to Numbers
        vector<int> dt;
        string word="";
        for(int i=0;i<date.size();i++){
            if(date[i]=='-'||i==date.size()-1){
                if(i==date.size()-1) word+=date[i];
                dt.push_back(strToInt(word));
                word="";
            }
            if(date[i]!='-') word+=date[i];
        }
        // Calc Days between 1900 - date
        int res=0;
        int DpY=0;
        int dpM=0;
        for(int i=1900;i<dt[0];i++){
            if(i%4==0&&(i%100!=0||i%400==0)) DpY+=366;
            else DpY+=365;
        }
        for(int i=1;i<dt[1];i++){
            if(i==4||i==6||i==9||i==11){
                dpM+=30;
            } else if(i==2){
                if(dt[0]%4==0&&(dt[0]%100!=0||dt[0]%400==0)) dpM+=29;
                else dpM+=28;
            } else{
                dpM+=31;
            }
        }

        return DpY+dpM+dt[2];
    }
    int daysBetweenDates(string date1, string date2) {
        return abs(f(date1)-f(date2));
    }
};
// @lc code=end

