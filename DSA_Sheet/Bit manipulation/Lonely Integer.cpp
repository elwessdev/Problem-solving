int lonelyinteger(vector<int> a) {
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    for(const int& n:a) ans=ans^n;
    return ans;
}