#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 3; // number of items
    int W = 50; // knapsack capacity
    
    int weight[] = {10, 20, 30};
    int value[] = {60, 100, 120};
    
    // Calculate value/weight ratio for each item
    double ratio[n];
    int index[n];
    
    for(int i = 0; i < n; i++) {
        ratio[i] = (double)value[i] / weight[i];
        index[i] = i;
    }
    
    // Sort items by ratio in descending order (simple bubble sort)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(ratio[j] < ratio[j+1]) {
                swap(ratio[j], ratio[j+1]);
                swap(index[j], index[j+1]);
            }
        }
    }
    
    double totalValue = 0;
    int currentWeight = 0;
    
    cout << "Fractional Knapsack Solution:\n";
    for(int i = 0; i < n; i++) {
        int idx = index[i];
        if(currentWeight + weight[idx] <= W) {
            // Take full item
            currentWeight += weight[idx];
            totalValue += value[idx];
            cout << "Item " << idx+1 << ": Take full (weight=" << weight[idx] 
                 << ", value=" << value[idx] << ")\n";
        } else {
            // Take fraction of item
            int remainingWeight = W - currentWeight;
            if(remainingWeight > 0) {
                double fraction = (double)remainingWeight / weight[idx];
                totalValue += value[idx] * fraction;
                cout << "Item " << idx+1 << ": Take " << fraction 
                     << " fraction (value=" << value[idx] * fraction << ")\n";
            }
            break;
        }
    }
    
    cout << "Maximum value: " << totalValue << endl;
    return 0;
}