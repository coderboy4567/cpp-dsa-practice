#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n = 6;
    int prices[6] = {7, 1, 5, 3, 6, 4};

    int minPrice = INT_MAX; 
    int maxProfit = 0;   

    for (int i = 0; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } 
        else {
            // Agar aaj bechte hain toh kitna fayda hoga?
            int currentProfit = prices[i] - minPrice;
        
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }

    cout << "Maximum Profit = " << maxProfit << "\n";

    return 0;
}