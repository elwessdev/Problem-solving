long sumXor(long n) {
    int cnt=0;
    long temp=n;
    while(temp>0){
        if((temp&1)==0) cnt++;
        temp>>=1;
    }
    long ans=(1LL<<cnt);
    return ans;
}