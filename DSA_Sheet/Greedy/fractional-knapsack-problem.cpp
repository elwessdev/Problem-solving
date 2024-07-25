struct Item{
    double weight, profit;
    Item(double w, double p):weight(w),profit(p){};
};
bool comparator(Item a, Item b){
    return (a.profit/a.weight)>(b.profit/b.weight);
}
double main(){
    vector<Item> items{{2, 10}, {3, 5}, {5, 15}, {7, 7}, {1, 6}, {4, 18}, {1, 3}};
    sort(items.begin(),items.end(),comparator);
    double n = 15.0;
    double ans = 0.0;
    for(auto& item:items){
        if(n<=0) break;
        if(item.weight<=n){
            ans+=item.profit;
            n-=item.weight;
        } else {
            ans+=item.profit*(n/item.weight);
            n=0;
        }
    }
    return ans;
}