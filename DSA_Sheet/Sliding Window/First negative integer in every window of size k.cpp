vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    vector<long long> ans;
    long long p1=0, p2=K-1;
    deque<int> d;
    int i=0;
    for(;i<K;i++){
        d.push_back(i);
        while(!d.empty()&&A[d.back()]>=0){
            d.pop_back();
        }
    }
    for(;i<N;i++){
        
        if(d.empty()) ans.push_back(0);
        else ans.push_back(A[d.front()]);
        
        while(!d.empty()&&i-K>=d.front()){
            d.pop_front();
        }
        
        d.push_back(i);
        
        while(!d.empty()&&A[d.back()]>=0){
            d.pop_back();
        }
    }
    if(d.empty()) ans.push_back(0);
    else ans.push_back(A[d.front()]);
    return ans;
}