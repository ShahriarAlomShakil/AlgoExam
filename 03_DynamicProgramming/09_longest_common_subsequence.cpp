#include <iostream>
#include <cstring>
using namespace std;

// Memoization approach
int memo[1000][1000];

int lcsMemo(char X[], char Y[], int m, int n) {
    if (m == 0 || n == 0) return 0;
    if (memo[m][n] != -1) return memo[m][n];
    
    if (X[m-1] == Y[n-1]) {
        memo[m][n] = 1 + lcsMemo(X, Y, m-1, n-1);
    } else {
        memo[m][n] = max(lcsMemo(X, Y, m, n-1), lcsMemo(X, Y, m-1, n));
    }
    
    return memo[m][n];
}

// Bottom-up approach (Tabulation)
int lcsBottomUp(char X[], char Y[], int m, int n) {
    int dp[m+1][n+1];
    
    // Build dp table in bottom-up manner
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    return dp[m][n];
}

int main() {
    char X[1000], Y[1000];
    
    cout << "Enter first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;
    
    int m = strlen(X);
    int n = strlen(Y);
    
    // Initialize memoization array
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            memo[i][j] = -1;
        }
    }
    
    cout << "LCS Length (Memoization): " << lcsMemo(X, Y, m, n) << endl;
    cout << "LCS Length (Bottom-up): " << lcsBottomUp(X, Y, m, n) << endl;
    
    return 0;
}
