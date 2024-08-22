#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.size() == 0) {
        return 0;
    }

    int maxProfit = 0;
    int i = 0;
    int j = i + 1;

    while (i < prices.size() - 1) {
        int currentBuy = prices[i];
        
        // Move j to find the best selling point after i
        while (j < prices.size()) {
            int currentSell = prices[j];
            int profit = currentSell - currentBuy;

            if (profit > maxProfit) {
                maxProfit = profit;  // Update the maximum profit
            }
            j++;
        }

        i++;
        j = i + 1;  // Reset j to start after the new i
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;

    return 0;
}
