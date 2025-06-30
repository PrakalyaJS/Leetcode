
 int maxProfit(int* prices, int n) {
    int minBuyPrice= prices[0],maxProfit=0;
    for(int i =1;i<n;i++)
    {
        minBuyPrice = fmin(minBuyPrice,prices[i]);
        maxProfit = fmax(maxProfit,prices[i]-minBuyPrice);
    }
    return maxProfit;
}