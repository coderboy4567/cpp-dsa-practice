// 04nov_stock_buy_sell.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(const vector<int>& prices) {
    int minPrice = prices[0], profit = 0;
    for (int price : prices) {
        minPrice = min(minPrice, price);
        profit = max(profit, price - minPrice);
    }
    return profit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << maxProfit(prices) << endl;
    return 0;
}