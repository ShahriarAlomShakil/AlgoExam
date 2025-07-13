#include <iostream>
using namespace std;

int arr[20], subset[20], n, target;
bool found = false;

void printSubset(int size) {
    cout << "Subset: { ";
    for (int i = 0; i < size; i++) {
        cout << subset[i] << " ";
    }
    cout << "}\n";
}

void sumOfSubset(int index, int currentSum, int subsetSize) {
    if (currentSum == target) {
        found = true;
        printSubset(subsetSize);
        return;
    }
    
    if (index >= n || currentSum > target) return;
    
    // Include current element
    subset[subsetSize] = arr[index];
    sumOfSubset(index + 1, currentSum + arr[index], subsetSize + 1);
    
    // Exclude current element
    sumOfSubset(index + 1, currentSum, subsetSize);
}

int main() {
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter target sum: ";
    cin >> target;
    
    cout << "Finding subsets with sum " << target << ":\n";
    sumOfSubset(0, 0, 0);
    
    if (!found) {
        cout << "No subset found with sum " << target << endl;
    }
    
    return 0;
}
