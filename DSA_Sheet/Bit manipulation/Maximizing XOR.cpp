int maximizingXor(int l, int r) {
    int ans=0;
    for(int i=l;i<=r;i++){
        for(int j=i;j<=r;j++){
            if((i^j)>ans) ans=(i^j);
            cout<<i<<j<<endl;
        }
    }
    return ans;
}