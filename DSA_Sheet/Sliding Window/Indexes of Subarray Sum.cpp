vector<int> subarraySum(vector<int>arr, int n, long long s){
    long long p1=0, p2=0;
    long long sum=0;
    vector<int> ans;
    if(s==0){
        while(p2<n){
          if(arr[p2]==0){
            ans.push_back(p2+1); 
            ans.push_back(p2+1);
            break;
          }
          p2++;
        }
    } else {
        while (p1 < n) {
            if (sum == s) {
                ans.push_back(p1 + 1);
                ans.push_back(p2);
                return ans;
            } else if (sum < s && p2 < n) {
                sum += arr[p2];
                p2++;
            } else {
                if (p1 < p2) {
                    sum -= arr[p1];
                    p1++;
                } else {
                    // p2++;
                    p1++;
                }
            }
        }
    }
    
    if(ans.empty()) ans.push_back(-1);
    return ans;
}