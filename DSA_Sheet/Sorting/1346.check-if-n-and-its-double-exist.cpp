/*
 * @lc app=leetcode id=1346 lang=cpp
 *
 * [1346] Check If N and Its Double Exist
 */

// @lc code=start
class Solution {
public:
    bool bs(vector<int> arr, int s, int pos){
        int l=0, r=arr.size()-1;
        int mid;
        while(l<=r){
            mid=(l+r)/2;
            if(arr[mid]==s) break;
            if(arr[mid]>s) r=mid-1;
            else l=mid+1;
        }
        if(arr[mid]==s&&mid!=pos) return true;
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        //--> searching and sorting approach
            // // Insertion sort
            // for(int i=0;i<arr.size();i++){
            //     int key=arr[i];
            //     int prev=i-1;
            //     while(prev>=0&&key<arr[prev]) arr[prev+1]=arr[prev], prev--;
            //     arr[prev+1]=key;
            // }
            // for(auto &c:arr) cout<<c<<" ";
            // // BS search
            // for(int i=0;i<arr.size();i++){
            //     if(bs(arr, (arr[i]*2), i)) return true;
            // }
            // return false;
        //--> Hashmap approach
        unordered_map<int,int> hmp;
        for(int i=0;i<arr.size();i++) hmp[arr[i]]=i;
        for(int i=0;i<arr.size();i++){
            if(hmp.count(arr[i]*2)&&hmp[arr[i]*2]!=i) return true;
        }
        return false;
    }
};
// @lc code=end

