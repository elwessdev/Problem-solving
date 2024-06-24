class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long sum=0;
        for(int i=0;i<K;i++){
            sum+=Arr[i];
        }
        long ans=sum;
        int p1=0, p2=K-1;
        while(p2<N-1){
            p2++;
            sum+=Arr[p2]-Arr[p1];
            p1++;
            if(sum>ans) ans=sum;
        }
        return ans;
    }
};