int maxProfit(int* prices, int pricesSize) {
    int profit=0;
    int low=-1,high=0;
    int i;
    
    for (i=0;i<pricesSize-1;++i){
        if(prices[i]<prices[i+1]){
            if(low==-1)
                low=prices[i];
            high=prices[i+1];
        }
        else if(prices[i]>prices[i+1]&&high&&low!=-1){
            profit+=high-low;
            high=0;
            low=-1;
        }
    }
    if (pricesSize>1&&prices[i]>=prices[i-1]&&low!=-1)
        profit+=prices[i]-low;
    return profit;
}