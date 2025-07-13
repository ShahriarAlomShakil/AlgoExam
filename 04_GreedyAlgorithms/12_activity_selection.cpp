#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 6; // number of activities
    
    int start[] = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};
    int activity[] = {0, 1, 2, 3, 4, 5}; // activity indices
    
    // Sort activities by finish time (simple bubble sort)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(finish[j] > finish[j+1]) {
                swap(finish[j], finish[j+1]);
                swap(start[j], start[j+1]);
                swap(activity[j], activity[j+1]);
            }
        }
    }
    
    cout << "Activity Selection (Greedy Algorithm):\n";
    cout << "Selected activities: ";
    
    // First activity is always selected
    cout << "A" << activity[0]+1 << " ";
    int lastSelected = 0;
    int count = 1;
    
    // Select activities that start after the last selected activity finishes
    for(int i = 1; i < n; i++) {
        if(start[i] >= finish[lastSelected]) {
            cout << "A" << activity[i]+1 << " ";
            lastSelected = i;
            count++;
        }
    }
    
    cout << "\nTotal activities selected: " << count << endl;
    
    cout << "\nActivity details:\n";
    for(int i = 0; i < n; i++) {
        cout << "A" << activity[i]+1 << ": Start=" << start[i] 
             << ", Finish=" << finish[i] << endl;
    }
    
    return 0;
}