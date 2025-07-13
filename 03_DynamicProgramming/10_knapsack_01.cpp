#include <iostream>
using namespace std;

// Memoization approach
int memo[1000][1000];

int knapsackMemo(int wt[], int val[], int W, int n) {
    if (n == 0 || W == 0) return 0;
    if (memo[n][W] != -1) return memo[n][W];
    
    if (wt[n-1] > W) {
        memo[n][W] = knapsackMemo(wt, val, W, n-1);
    } else {
        int include = val[n-1] + knapsackMemo(wt, val, W - wt[n-1], n-1);
        int exclude = knapsackMemo(wt, val, W, n-1);
        memo[n][W] = max(include, exclude);
    }
    
    return memo[n][W];
}

// Bottom-up approach (Tabulation)
int knapsackBottomUp(int wt[], int val[], int W, int n) {
    int dp[n+1][W+1];
    
    // Build table dp[][] in bottom-up manner
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i-1] <= w)
                dp[i][w] = max(val[i-1] + dp[i-1][w - wt[i-1]], dp[i-1][w]);
            else
                dp[i][w] = dp[i-1][w];
        }
    }
    
    return dp[n][W];
}

int main() {
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter knapsack capacity: ";
    cin >> W;
    
    int val[n], wt[n];
    
    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }
    
    cout << "Enter weights: ";
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }
    
    // Initialize memoization array
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            memo[i][j] = -1;
        }
    }
    
    cout << "Maximum value (Memoization): " << knapsackMemo(wt, val, W, n) << endl;
    cout << "Maximum value (Bottom-up): " << knapsackBottomUp(wt, val, W, n) << endl;
    
    return 0;
}
