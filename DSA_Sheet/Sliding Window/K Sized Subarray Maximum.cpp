class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        int maxIdx=0;
        for(int i=0;i<k;i++){
            if(arr[maxIdx]<arr[i]) maxIdx=i;
        }
        ans.push_back(arr[maxIdx]);
        int p1=0,p2=k-1;
        while(p2<n-1){
            p2++;
            p1++;
            if(maxIdx<p1){
                maxIdx=p1;
                for(int i=p1;i<=p2;i++){
                    if(arr[i]>arr[maxIdx]) maxIdx=i;
                }
            } else {
                if(arr[p2]>arr[maxIdx]) maxIdx=p2;
            }
            ans.push_back(arr[maxIdx]);
        }
        return ans;
    }
};