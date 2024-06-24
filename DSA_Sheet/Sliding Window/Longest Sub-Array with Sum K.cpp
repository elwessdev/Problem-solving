class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int, int> prefixSumIndex;
        int curSum=0;
        int maxL=0;
        // int p1=0;
        for (int i = 0; i < N; i++) {
                curSum += A[i];
        
                if (curSum == K) {
                    maxL = i + 1;
                }
        
                if (prefixSumIndex.find(curSum - K) != prefixSumIndex.end()) {
                    maxL = max(maxL, i - prefixSumIndex[curSum - K]);
                }
        
                if (prefixSumIndex.find(curSum) == prefixSumIndex.end()) {
                    prefixSumIndex[curSum] = i;
                }
            }
        return maxL;
    } 

};